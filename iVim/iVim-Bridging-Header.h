//
//  iVim-Bridging-Header.h
//  iVim
//
//  Created by Terry on 7/21/17.
//  Copyright © 2017 Boogaloo. All rights reserved.
//

#ifndef iVim_Bridging_Header_h
#define iVim_Bridging_Header_h

#import <Foundation/Foundation.h>

int const keyCAR;
int const keyBS;
int const keyESC;
int const keyTAB;
int const keyF1;
int const keyUP;
int const keyDOWN;
int const keyLEFT;
int const keyRIGHT;
int const mouseLEFT;
int const mouseDRAG;
int const mouseRELEASE;

//int VimMain(int argc, char *argv[]);
void vimHelper(int argc, NSString *file);
void gui_resize_shell(int pixel_width, int pixel_height);
void gui_update_cursor(int force, int clear_selection);
void gui_undraw_cursor();
void gui_send_mouse_event(int button,int x,int y, int repeated_click, unsigned int modifiers);
void maybe_intro_message(void);

int vim_setenv(const unsigned char *name, const unsigned char *value);
int do_cmdline_cmd(const unsigned char *cmd);

void add_to_input_buf(const unsigned char  *s, int len);
void add_to_input_buf_csi(const unsigned char *s, int len);
int getCTRLKeyCode(NSString * s);

void move_cursor_left(long times);
void move_cursor_right(long times);

int cells_for_character(const unsigned char * c);

BOOL is_current_buf_new(void);
BOOL file_is_in_buffer_list(NSString * path);
BOOL is_in_normal_mode(void);

#endif /* iVim_Bridging_Header_h */