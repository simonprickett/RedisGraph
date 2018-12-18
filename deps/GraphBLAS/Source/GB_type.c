//------------------------------------------------------------------------------
// GB_type: return the type of a matrix
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2018, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

#include "GB.h"

GrB_Info GB_type            // get the type of a matrix
(
    GrB_Type *type,         // returns the type of the matrix
    const GrB_Matrix A,     // matrix to query
    GB_Context Context
)
{ 

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    GB_RETURN_IF_NULL (type) ;
    ASSERT_OK (GB_check (A, "A for type", GB0)) ;

    //--------------------------------------------------------------------------
    // return the type
    //--------------------------------------------------------------------------

    (*type) = A->type ;
    return (GrB_SUCCESS) ;
}
