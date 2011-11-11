#ifndef OTP_H
#define OTP_H


extern void otp_sx(u8 line);
extern void otp_mx(u8 line); // for when the # button is held- rotate key
extern void otp_switch(u8 line);
extern void display_otp(u8 line, u8 update);
extern u8 update_otp(u8 line, u8 update);


#endif
