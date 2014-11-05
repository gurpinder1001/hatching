#include<iostream>
#include <cairo/cairo-svg.h>
#include <stdio.h>
using namespace std;

int main() {

             cairo_t *cr;

       cairo_surface_t *surface;

       cairo_pattern_t *pattern;

      //cairo_text_extents_t text;
 surface =   (cairo_surface_t *)cairo_svg_surface_create("hatch.svg", 1000.0, 1000.0);
       cr = cairo_create(surface);

//float M_PI=3.14;
//cairo_rectangle(cr, 200, 200, 700, 900);
//cairo_clip (cr);

cairo_new_path (cr);  /* current path is not
                         consumed by cairo_clip() */

int m,n,a,b;

cairo_set_source_rgb (cr, 0, 1, 0);
cout<<"enter start points"; cin>>m>>n;
cout<<"enter lenght and breadth"; cin>>a>>b;
cairo_rectangle (cr, m, n, a, b);
cairo_fill (cr);
//cairo_move_to (cr, m, n);
//cairo_line_to (cr, a+m, b+n);
//cairo_move_to (cr, a+m, n);
//cairo_line_to (cr, m,b+n);
//cairo_set_line_width (cr, 2.0);
//cairo_stroke (cr);
 

     //  cairo_show_text(cr, "Hatching");


       //cairo_move_to(cr, 10, 75);

       //cairo_show_text(cr, "Wikipedia!");

   

       cairo_destroy (cr);

       cairo_surface_destroy (surface);


       return 0;

   }
