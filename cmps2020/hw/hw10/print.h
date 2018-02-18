#pragma once
#include "cmpslib.h"
#include "SLinkedList.h"

// what are the dimensions of the image that we are using for a node background
#define NodeHeight 100
#define NodeWidht  100
#define NodeGap 50
#define LeftNodeMargin 150
#define Line_X (LeftNodeMargin + (.5 * NodeWidht))
#define Line_L (LeftNodeMargin + (.25 * NodeWidht))
#define Line_R (LeftNodeMargin + (.75 * NodeWidht))

string ReplaceFirst(string phrase,string sought, string replacement)
{
	size_t  pos = phrase.find (sought);
	if (pos != string::npos)
	{
		int num_chars = sought.length(); // how many characters is the string we are searching for
		phrase.replace(pos,num_chars,replacement);
	}
	return phrase;
}

// Convert an SListNode to javascript calls
string DrawNode (SListNode *in, int x, int y ) 
{
	ostringstream ss; 
	ss << "ctx.strokeStyle='#000000';ctx.fillStyle='#000000'\n";
	ss << "fillRoundedRect(" << x << "," << y << "," << NodeWidht << "," << NodeHeight << ",5);";
	ss << "ctx.fillText('Address:" << in        << "'," << x+5 << "," << y+20 << ");" ; 
	ss << "ctx.fillText('Data:"    << in->data  << "'," << x+5 << "," << y+40 << ");" ; 
	ss << "ctx.fillStyle='#ff0000';ctx.fillText('Next:"    << in->next  << "'," << x+5 << "," << y+80 << ");" ; 
	ss << endl;
	return ss.str();
}
string AddressAsString(SListNode * in)
{
ostringstream temp;
temp << ((void * )in);
return temp.str();

}

string DrawText(string in, int x, int y,string color="#000000")
{
	ostringstream ss;
	ss << "ctx.fillStyle='" << color <<"';\n";
	ss << "ctx.fillText(\"" << in << "\"," << x << "," << y   << ");\n";
	return ss.str();
}

string DrawRect( int x,int y, int w, int h, int r,string color="#000000")
{
	ostringstream ss;
	ss << "ctx.beginPath();ctx.strokeStyle='" << color << "';" << endl;
	ss << "fillRoundedRect(" << x << "," << y << "," 
		<< w << "," << h << "," << r <<");"<< endl;
	return ss.str();
}

string DrawLine( int sx,int sy, int ex, int ey, string color="#000000")
{
	ostringstream ss;
	ss << "ctx.beginPath();ctx.strokeStyle='" << color << "';" << endl;
	ss << "ctx.moveTo("   << sx << "," << sy << ");" << endl;
	ss << "ctx.lineTo("   << ex << "," << ey << ");" << endl;
	ss << "ctx.stroke();" << endl;
	return ss.str();
}


void ToHTMLFile(SLinkedList & list,char const * filename)
{
    char filename2[300];
    strncpy( filename2, getenv("HOME"),200);
    strcat(filename2,"/public_html/");
    strncat(filename2,filename,100);

    cout << "\nwriting " << filename2 << endl;

	ofstream out(filename2);
	int row_position =30;
	// read template file into string
	std::ifstream t("template.html");
	std::string body((std::istreambuf_iterator<char>(t)),std::istreambuf_iterator<char>());
	t.close();


	string js; // the javascript, we will build the code to draw the elements


	js += DrawRect(5,5,500,50,5);
	js += DrawText("SlineSList:",10,30);
	js += DrawText("Head:" + AddressAsString(list.head) ,10,40,"#ff0000");

	row_position =150;

	SListNode * temp =list.head;

	if (nullptr != temp)
	{
		// draw a red line to first node
		js += DrawLine( 100, 50, Line_L,row_position,"#ff0000");
	}

	while (nullptr != temp)
	{
		js += DrawNode(temp,LeftNodeMargin,row_position);

		if (nullptr != temp->next)
		{
			js+= DrawLine(Line_L , row_position+NodeHeight, Line_L,row_position+NodeHeight+NodeGap,"#ff0000" );
			js+= DrawLine(Line_L-4 , row_position+NodeHeight+NodeGap -4, Line_L,row_position+NodeHeight+NodeGap,"#ff0000" );
			js+= DrawLine(Line_L+4 , row_position+NodeHeight+NodeGap -4, Line_L,row_position+NodeHeight+NodeGap,"#ff0000" );



		}
		row_position +=NodeHeight + NodeGap;
		temp = temp->next;
	}





	body = ReplaceFirst(body,"__JAVASCRIPT__",js); 
	out << body;
	out.close();
    cout << "look at http://cs.csubak.edu/~" <<getenv("LOGNAME") << "/" << filename << endl;


}


