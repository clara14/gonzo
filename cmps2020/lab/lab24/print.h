#include <fstream>
#include <iostream>
#include <deque>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>


#define NODE TreeNode 
#define BS_TREE AVL
#define NODE_DATA data
#define RIGHT_PTR right
#define LEFT_PTR left





/*

// Find the maximum height of the binary tree
int maxHeight(NODE *p)
  {
  if (!p)
    {
    return 0;
    }
  int leftHeight = maxHeight(p->LEFT_PTR);
  int rightHeight = maxHeight(p->RIGHT_PTR);
  return (leftHeight > rightHeight) ? leftHeight + 1: rightHeight + 1;
  }
*/

// Convert an integer value to string
template <class T>
string ToString(NODE<T> *in )
  {
  ostringstream ss;
  ss  << "Addr:"  << in       <<"<br></br>"
      << "Value:" << in->NODE_DATA <<"<br></br>"
      << "Right:" << in->RIGHT_PTR<<"<br></br>"
      << "Left:"  << in->LEFT_PTR <<"<br></br>";

  return ss.str();
  }
template <class T>
void TraverseNode(NODE<T> * in, ofstream & out, string indent,string cls)
  {
  if ( in->LEFT_PTR || in->RIGHT_PTR)
    {
    out << indent << "    <a href='#' class='"<< cls << "'>"<< ToString(in) << "</a>\n";

    out << indent << "<ul>\n";
    if( in->LEFT_PTR )
      {
      out << indent << "  <li>\n";
      TraverseNode(in->LEFT_PTR,out,indent + "  ","green");
      out << indent << "  </li>\n";
      }
    else
      {
      out << indent << "<li><a href='#' class='green'>NULL Pointer<br></br>No Node</a></li>\n";  // empty node so tree displays balanced
      }

    if( in->RIGHT_PTR )
      {
      out << indent << "  <li>\n";
      TraverseNode(in->RIGHT_PTR,out,indent + "  ","pink");
      out << indent << "  </li>\n";
      }
    else
      {
      out << indent << "<li><a href='#' class='pink'>NULL Pointer<br></br>No Node</a></li>\n";  // empty node so tree displays balanced
      }
    out << indent << "</ul>\n";
    }
  else
    {
    out << indent << "    <a href='#' class='"<< cls << "'>"<< ToString(in) << "</a>\n";
    }
  } // end TraverseNode




template <class T>
void ToHTMLFile(BS_TREE<T> & tree,char const * filename)
  {
  char filename2[300];
  //cout <<  getenv("HOME") << endl;

  strncpy( filename2, getenv("HOME"),200);
  strcat (filename2,"/public_html/");
  strncat(filename2,filename,100);



  cout << "look at http://cs.csubak.edu/~" <<getenv("LOGNAME") << "/"<< filename << endl;





  string indent = "  ";

  ofstream out(filename2);
  out << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\"  "
      << "\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\"> \n"
      << "<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang=\"en\">\n"
      << "<head>\n"
      << "<meta http-equiv=\"Content-Type\" content=\"text/html;charset=utf-8\" ></meta>\n"
      << "<link href=\"http://cs.csubak.edu/~msarr/cmps2020/styles/tree.css\" rel=\"stylesheet\" type=\"text/css\"></link>"
      << "<title>Binary Search Tree</title></head>\n<body>\n"
      << "<div class='tree'>\n"
      //		<< "<ul>\n"
      << "<li><a href='#' class='blue'>Root Node blue<br> Addr:"<<tree.root<<"</a>           <br></br></li>\n"
      << "<li><a href='#' class='pink'>Right Child Node pink</a>      <br></br></li>\n"
      << "<li><a href='#' class='green'>Left Child  Node green</a>  <br></br></li>\n"
      //		<< "</ul>\n"
      << "<br></br>\n";

  //out << "<link href=\"http://cs.csubak.edu/~msarr/cmps2020/tree.css\" rel=\"stylesheet\" type=\"text/css\"  />";

  out << indent << "<ul>\n";
  out << indent << "  <li>\n";
  // start the recursion
  if(tree.root)
    {
    TraverseNode(tree.root, out ,"    ","blue");
    }

  out << indent << "  </li>\n";
  out << indent << "</ul>\n";
  out << "</div>\n";;

  out << "</body></html>\n";
  out.close();
  }

