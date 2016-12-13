#ifndef color_xyz_trait_bound_uint32
#define color_xyz_trait_bound_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_uint32 >
      : public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > 
      {
      };

   }
 }

#endif