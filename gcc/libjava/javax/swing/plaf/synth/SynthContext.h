
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_synth_SynthContext__
#define __javax_swing_plaf_synth_SynthContext__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class JComponent;
      namespace plaf
      {
        namespace synth
        {
            class Region;
            class SynthContext;
            class SynthStyle;
        }
      }
    }
  }
}

class javax::swing::plaf::synth::SynthContext : public ::java::lang::Object
{

public:
  SynthContext(::javax::swing::JComponent *, ::javax::swing::plaf::synth::Region *, ::javax::swing::plaf::synth::SynthStyle *, jint);
  virtual ::javax::swing::JComponent * getComponent();
  virtual ::javax::swing::plaf::synth::Region * getRegion();
  virtual ::javax::swing::plaf::synth::SynthStyle * getStyle();
  virtual jint getComponentState();
private:
  ::javax::swing::JComponent * __attribute__((aligned(__alignof__( ::java::lang::Object)))) component;
  ::javax::swing::plaf::synth::Region * region;
  ::javax::swing::plaf::synth::SynthStyle * style;
  jint state;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_synth_SynthContext__
