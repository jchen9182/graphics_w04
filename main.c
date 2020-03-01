#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {
    //TEST MATRICES
    // struct matrix * translate = make_translate(11, 12, 13);
    // struct matrix * scale = make_scale(11, 12, 13);
    // struct matrix * rotx = make_rotX(10);
    // struct matrix * roty = make_rotY(10);
    // struct matrix * rotz = make_rotZ(10);
    // print_matrix(translate);
    // print_matrix(scale);
    // print_matrix(rotx);
    // print_matrix(roty);
    // print_matrix(rotz);

    screen s;
    struct matrix * edges;
    struct matrix * transform;
    
    edges = new_matrix(4, 4);
    transform = new_matrix(4, 4);
    
    if (argc == 2) parse_file(argv[1], transform, edges, s);
    else parse_file("stdin", transform, edges, s);
    
    free_matrix(edges);
    free_matrix(transform);
}
