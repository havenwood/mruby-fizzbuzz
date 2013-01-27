const char fizzbuzz[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x39,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x39,
0x30,0x30,0x30,0x30,0x4d,0x41,0x54,0x5a,0x20,0x20,0x20,0x20,0x30,0x30,0x30,0x39,
0x30,0x30,0x30,0x30,0x00,0x00,0x01,0x4e,0x00,0x02,0x00,0x00,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x7b,0x16,0x00,0x00,0x00,0x36,0x53,0x43,0x00,0x01,0x00,0x04,
0x00,0x02,0x36,0x78,0x00,0x00,0x00,0x05,0x00,0xc0,0x00,0x03,0x01,0x40,0x31,0x83,
0x01,0x80,0x03,0x40,0x00,0x80,0x00,0xa1,0x00,0x00,0x00,0x4a,0x1a,0x15,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x75,0x70,0x74,0x6f,0x8b,0xc5,
0x00,0x00,0x00,0xd6,0x53,0x43,0x00,0x04,0x00,0x06,0x00,0x02,0xfd,0xca,0x00,0x00,
0x00,0x25,0x02,0x00,0x00,0x26,0x02,0x00,0x40,0x01,0x02,0xc0,0x02,0x03,0x02,0x00,
0x00,0xa0,0x02,0xbf,0xff,0x83,0x02,0x00,0x40,0xb2,0x02,0x40,0x02,0x99,0x02,0x00,
0x40,0x01,0x02,0xc0,0x01,0x03,0x02,0x00,0x00,0xa0,0x02,0xbf,0xff,0x83,0x02,0x00,
0x40,0xb2,0x02,0x40,0x01,0x19,0x02,0x00,0x00,0x3d,0x00,0x40,0x08,0x97,0x02,0x00,
0x40,0x01,0x02,0xc0,0x02,0x03,0x02,0x00,0x00,0xa0,0x02,0xbf,0xff,0x83,0x02,0x00,
0x40,0xb2,0x02,0x40,0x01,0x19,0x02,0x00,0x00,0xbd,0x00,0x40,0x04,0x97,0x02,0x00,
0x40,0x01,0x02,0xc0,0x01,0x03,0x02,0x00,0x00,0xa0,0x02,0xbf,0xff,0x83,0x02,0x00,
0x40,0xb2,0x02,0x40,0x01,0x19,0x02,0x00,0x01,0x3d,0x00,0x40,0x00,0x97,0x02,0x00,
0x40,0x01,0x01,0x81,0x00,0x01,0x02,0x00,0x00,0x06,0x02,0x80,0xc0,0x01,0x02,0x00,
0x80,0xa0,0x02,0x00,0x00,0x29,0x88,0x3e,0x00,0x00,0x00,0x03,0x11,0x00,0x08,0x46,
0x69,0x7a,0x7a,0x42,0x75,0x7a,0x7a,0x11,0x00,0x04,0x46,0x69,0x7a,0x7a,0x11,0x00,
0x04,0x42,0x75,0x7a,0x7a,0x11,0x2c,0x00,0x00,0x00,0x03,0x00,0x01,0x25,0x00,0x02,
0x3d,0x3d,0x00,0x04,0x70,0x75,0x74,0x73,0x18,0x8a,0x00,0x00,0x00,0x00,
};
#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/proc.h"

int
main(void)
{
  mrb_state *mrb;
  mrb = mrb_open();
  int n = mrb_read_irep(mrb, fizzbuzz);
  mrb_run(mrb, mrb_proc_new(mrb, mrb->irep[n]), mrb_top_self(mrb));
  mrb_close(mrb);
  return 0;
}
