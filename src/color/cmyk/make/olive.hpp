#ifndef color_cmyk_make_olive
#define color_cmyk_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x70;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7f00;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x7fff0000u;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x7fffffff00000000ul;
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0, 1, 0.5 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0, 1, 0.5 } );
       }

      inline
      void olive( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0, 1, 0.5 } );
       }

    }
  }

#endif