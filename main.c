/*****************************************************************************
 *  File: main.c
 * 
 *  This file is the top level of the application selector.
 *
 ****************************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#include "alt_video_display/alt_video_display.h"    //include display buffer subroutine
#include "system.h"
#include "graphics_lib/simple_graphics.h"           //include draw line function or draw box function subroutine 
#include "fonts/fonts.h"                            //include font subroutine
#include "pic_title.h"
#include "graphics_lib/color.h"
#include "chineseCHARs/chineseCHARs.h"
#include "LTM_touch/pio_touchpanel.h"
#include "altera_avalon_pio_regs.h"
#define p2_w 238
#define p2_h 160
#define p3_w	238
#define p3_h	147
#define p4_w	237
#define p4_h	168
#define p5_w	236
#define p5_h	167
#define p6_w	239
#define p6_h	161
#define p7_w	239
#define p7_h	147
#define p8_w	237
#define p8_h	169
#define me_w	300
#define me_h	250
#define data0_w	217
#define data0_h	232
#define data1_w	460
#define data1_h	500
#define data2_w	36
#define data2_h	33
#define bcannon_w 35
#define bcannon_h 33
#define bcar_w 35
#define bcar_h 33
#define belephant_w 35
#define belephant_h 33
#define bhorse_w 35
#define bhorse_h 33
#define bking_w 34
#define bking_h 33
#define bknight 35
#define bknight 33
#define bSoldiers 34
#define bSoldiers 33
#define rcannon_w 35
#define rcannon_h 33
#define rcar_w 35
#define rcar_h 33
#define relephant_w 34
#define relephant_h 33
#define rhorse_w 35
#define rhorse_h 33
#define rking_w 36
#define rking_h 33
#define rknight_w 35
#define rknight_h 33
#define rSoldiers 32
#define rSoldiers 33
typedef struct{
	char color;
	char *chess;
	int x;
	int y;
}lockation;
lockation add[9][10];
int main()
{
  
t3();
}
int reload_diplay(int x,int y){
	if(add[x][y].chess!="n"){
		if(add[x][y].color=='r'){
			if(add[x][y].chess=="car"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rcar_w,rcar_h,rcar,display);
			}else if(add[x][y].chess=="horse"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rhorse_w,rhorse_h,rhorse,display);
			}else if(add[x][y].chess=="elephant"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),relephant_w,relephant_h,relephant,display);
			}else if(add[x][y].chess=="knight"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rknight_w,rknight_h,rknight,display);
			}else if(add[x][y].chess=="knight"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rknight_w,rknight_h,rknight,display);
			}else if(add[x][y].chess=="cannon"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rcannon_w,rcannon_h,rcannon,display);
			}else if(add[x][y].chess=="Soldiers"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),rSoldiers_w,rSoldiers_h,rSoldiers,display);
			}
		}else{
			if(add[x][y].chess=="car"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bcar_w,bcar_h,bcar,display);
			}else if(add[x][y].chess=="horse"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bhorse_w,bhorse_h,bhorse,display);
			}else if(add[x][y].chess=="elephant"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),belephant_w,belephant_h,belephant,display);
			}else if(add[x][y].chess=="knight"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bknight_w,bknight_h,bknight,display);
			}else if(add[x][y].chess=="knight"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bknight_w,bknight_h,bknight,display);
			}else if(add[x][y].chess=="cannon"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bcannon_w,bcannon_h,bcannon,display);
			}else if(add[x][y].chess=="Soldiers"){
				return nr_pio_lcdwritemap_at(0+(40*x), 0+(40*y),bSoldiers_w,bSoldiers_h,bSoldiers,display);
			}
		}
	}
}
int t3(){
        rehere:

	    unsigned int TD_VALID;
	    unsigned int X, Y;
	    unsigned int TP_TMP=0;
	    //unsigned int X_tmp=0x00,Y_tmp=0x00;
        int de=100000;
¡@¡@¡@¡@char color_now='r'; 
    ¡@¡@int nowi1=0,nowj1=0,nowi2=0,nowj2=0; 
	  // Initialize and start the LCD display
	    alt_video_display* display;
	    display = alt_video_display_init( LCD_SGDMA_NAME,         // char* sgdma_name
	                                    800,//ALT_VIDEO_DISPLAY_COLS,               // int width
	                                    600,//ALT_VIDEO_DISPLAY_ROWS,               // int height
	                                    ALT_VIDEO_DISPLAY_COLOR_DEPTH,        // int color_depth
	                                    ALT_VIDEO_DISPLAY_USE_HEAP,           // int buffer_location
	                                    ALT_VIDEO_DISPLAY_USE_HEAP,           // int descriptor_location
	                                    2 );                                  // int num_buffers
	    //clear display
	    alt_video_display_clear_screen ( display,0);
	    int ax=,ay=,nx=,ny=;//set initial & +n
            for(int i;i<9;i++){
            	for(int j;j<10;j++){
            		add[i][j] ={
            			"n","n",ax+nx*i,ay+ny*j 
				    };
				}
			}
			//set all lockation 
			char *chess_0[]={"car","horse","elephant","knight","king","knight","elephant","horse","car"};
			for(int i = 0;i<9;i++){
				add[i][0].chess=chess_0[i];
				add[i][0].color='r';
				add[i][9].chess=chess_0[i];
				add[i][9].color='b';
			}
			add[1][2].chess="cannon";
			add[1][2].color='r';
			add[7][2].chess="cannon";
			add[7][2].color='r';
			add[1][7].chess="cannon";
			add[1][7].color='b';
			add[7][7].chess="cannon";
			add[7][7].color='b';
			for(int i = 0;i<9;i+=2){
				add[i][3].chess="Soldiers";
				add[i][3].color='r';
				add[i][6].chess="Soldiers";
				add[i][6].color='b';
			}
			//set initial chess lockation
			alt_video_display_clear_screen(display,0);	
			nr_pio_lcdwritemap_at(0, 0,data1_w,data1_h,gImage_data1,display);
			for(int rei=0;rei<9;rei++){
				for(int rej=0;rej<10;rej++){
					reload_diplay(rei,rej);
				}
			}
			alt_video_display_register_written_buffer(display);
			int nowchose=0;
			int move=0;
			int restart=0;
			char wincolor='n';
	        while(1){
	        ¡@¡@nr_pio_lcdwritemap_at(0, 0,data1_w,data1_h,gImage_data1,display);
	        ¡@¡@nr_pio_lcdwritemap_at(250, 350,data2_w,data2_h,gImage_data2,display);
	        ¡@¡@alt_video_display_register_written_buffer( display );
            ¡@¡@TD_VALID=nr_pio_TP_READ(&X,&Y);
	        ¡@¡@printf("x=%d  y=%d",X,Y);
	            if(restart==0){
	        ¡@¡@for(int i;i<9;i++){
            	    for(int j;j<10;j++){
            		¡@¡@if((X>ax-20+nx*i&&X<ax+20+nx*i)&&(Y>ay-20+ny*j&&Y<ay+20+ny*j)){
            			¡@¡@if(nowchose==1){
            				¡@¡@nowi2=i;
            			¡@¡@    nowj2=j;
            			        //move confirm
            			        if(add[nowi1][nowj1].chess=="car"){
            			        	int now_test=1;
            			        	if(nowi1==nowi2 && nowj1!=nowj2){
            			        		int nowj_test=1;
            			        		if(nowj2-nowj1<0){
											now_test=-1;
										}else{
											now_test=1;
										}
            			        		while(nowj1+(nowj_test*now_test)!=nowj2){
            			        			if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        				goto nomove;
											}
											nowj_test++;
										}
            			        	
									}else if(nowi1!=nowi2 && nowj1==nowj2){
										int nowi_test=1;
										if(nowi2-nowi1<0){
											now_test=-1;
										}else{
											now_test=1;
										}
            			        		while(nowi1+(nowi_test*now_test)!=nowi2){
            			        			if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        				goto nomove;
											}
											nowi_test++;
										}
									}
									move=1;	
									//car move test
								}else if(add[nowi1][nowj1].chess=="horse"){
									if(abs(nowi1-nowi2)==1 && abs(nowj1-nowj2)==2 ){
										if(add[nowi2][(nowj1+nowj2)/2].chess=="n"&&add[nowi1][(nowj1+nowj2)/2].chess=="n"){
											move=1;
										}else if(add[nowi2][(nowj1+nowj2)/2].chess=="n"&&add[nowi2][(nowj1].chess=="n"){
											move=1;
										}else if(add[nowi1][(nowj1+nowj2)/2].chess=="n"&&add[nowi1][(nowj2].chess=="n"){
											move=1;
										}
            			        		
									}else if(abs(nowi1-nowi2)==2 && abs(nowj1-nowj2)==1){
									¡@¡@if(add[(nowi1+nowi2)/2][nowj1].chess=="n"&&add[(nowi1+nowi2)/2][nowj2].chess=="n"){
											move=1;
										}else if(add[(nowi1+nowi2)/2][nowj1].chess=="n"&&add[nowi2][(nowj1].chess=="n"){
											move=1;
										}else if(add[(nowi1+nowi2)/2][nowj2].chess=="n"&&add[nowi1][(nowj2].chess=="n"){
											move=1;
										}	
									}
									//horse move test
								}else if(add[nowi1][nowj1].chess=="elephant"){
									if(add[nowi1][nowj1].color=='r'&&nowj2<=4){
										if(abs(nowi1-nowi2)==2 && abs(nowj1-nowj2)==2)move=1;
									}else if(add[nowi1][nowj1].color=='b'&&nowj2>=5){
										if(abs(nowi1-nowi2)==2 && abs(nowj1-nowj2)==2 )move=1;
									}
									//elephant move test
								}else if(add[nowi1][nowj1].chess=="knight"){
								¡@¡@if(nowi2<=5&&nowi2>=3){
									¡@¡@ if(add[nowi1][nowj1].color=='r'&&nowj2<=2){
								         ¡@ if(abs(nowi1-nowi2)== 1  && nowj1-nowj2==0){
								         	¡@¡@move=1;
										 }else if(abs(nowj1-nowj2)==1&&nowi1-nowi2==0){
										 	    move=1
										 }else if((abs(nowi1-nowi2)==1&&abs(nowj1-nowj2)==1)&&(nowi1+nowj1)%2==1){
										      	move=1
										 }
									¡@¡@}else if(add[nowi1][nowj1].color=='b'&&nowj2>=7){ 
									¡@¡@ ¡@ if(abs(nowi1-nowi2)== 1  && nowj1-nowj2==0){
								         	¡@¡@move=1;
										 }else if(abs(nowj1-nowj2)==1&&nowi1-nowi2==0){
										 	    move=1
										 }else if((abs(nowi1-nowi2)== 1&&abs(nowj1-nowj2)== 1 )&&(nowi1+nowj1)%2==0){
										      	move=1
										¡@¡@} 
								¡@¡@¡@¡@} 
								¡@¡@}//knight move test
								}else if(add[nowi1][nowj1].chess=="king"){
								¡@¡@if(nowi2<=5&&nowi2>=3){
									¡@¡@ if(add[nowi1][nowj1].color=='r'&&nowj2<=2){
								         ¡@ if(abs(nowi1-nowi2)==1 && nowj1-nowj2==0){
								         	¡@¡@move=1;
										 }else if(abs(nowj1-nowj2)==1&&nowi1-nowi2==0){
										 	    move=1
										 }
									¡@¡@}else if(add[nowi1][nowj1].color=='b'&&nowj2>=7){ 
									¡@¡@ ¡@ if(abs(nowi1-nowi2)==1 && nowj1-nowj2==0){
								         	¡@¡@move=1;
										 ¡@ }else if(abs(nowj1-nowj2)==1&&nowi1-nowi2==0){
										 	    move=1
										    } 
								¡@¡@¡@¡@} 
								¡@¡@}//king move test 
								}else if(add[nowi1][nowj1].chess=="cannon"){
									int now_test=1;
            			        	if(nowi1==nowi2 && nowj1!=nowj2){
            			        		int nowj_test=1;
            			        		if(nowj2-nowj1<0){
											now_test=-1;
										}else{
											now_test=1;
										}
            			        		while(nowj1+(nowj_test*now_test)!=nowj2+now_test){
            			        			if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        				goto nomove;
											}
											nowj_test++;
										}
            			        	
									}else if(nowi1!=nowi2 && nowj1==nowj2){
										int nowi_test=1;
										if(nowi2-nowi1<0){
											now_test=-1;
										}else{
											now_test=1;
										}
            			        		while(nowi1+(nowi_test*now_test)!=nowi2+now_test){
            			        			if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        				goto nomove;
											}
											nowi_test++;
										}
									}
									if(add[nowi2][nowj2].chess!="n"&&add[nowi2][nowj2].color!=color_now){
										if(nowi1==nowi2 && nowj1!=nowj2){
            			        		¡@¡@int nowj_test=1,have_once=0;
            			        		¡@¡@if(nowj2-nowj1<0){
											¡@¡@now_test=-1;
										¡@¡@}else{
										¡@¡@	now_test=1;
										¡@¡@}
            			        		¡@¡@while(nowj1+(nowj_test*now_test)!=nowj2+now_test){
            			        		¡@¡@	if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        		¡@¡@		have_once++;
										¡@¡@	}
										¡@¡@	nowj_test++;
										¡@¡@}
            			        	¡@¡@ ¡@ if(have_once!=1){
            			        		¡@¡@¡@¡@goto nomove;
									¡@¡@¡@¡@} 
									¡@¡@}else if(nowi1!=nowi2 && nowj1==nowj2){
										¡@¡@int nowi_test=1,have_once=0;
										¡@¡@if(nowi2-nowi1<0){
										¡@¡@	now_test=-1;
									¡@¡@	}else{
											now_test=1;
									¡@¡@	}
            			        	¡@¡@	while(nowi1+(nowi_test*now_test)!=nowi2+now_test){
            			        	¡@¡@		if(add[nowi1][nowj1+nowj_test].chess!="n"){
            			        	¡@¡@			have_once++;
									¡@¡@		}
									¡@¡@		nowi_test++;
									¡@¡@	}
									¡@¡@¡@¡@if(have_once!=1){
            			        		¡@¡@¡@¡@goto nomove;
									¡@¡@¡@¡@}  
								¡@¡@	}
									}
									move=1;//cannon move test
								}else if(add[nowi1][nowj1].chess=="Soldiers"){
									if(add[nowi1][nowj1].color=='r'){
										if(nowj1<=4&&nowj2-nowj1==1){
											move=1;
										}else if(nowj1>4&&nowj2-nowj1!=-1){
											if(nowj2-nowj1==1){
												move=1;
											}else if(abs(nowi2-nowi1)==1&&nowj2-nowj1==0){
												move=1;
											}
										}
									}//Soldiers move test
								}
								¡@¡@
								 
								//all move confirm
								nomove:
            		¡@¡@¡@¡@¡@¡@if(add[nowi1][nowj1].color!=color_now&&move==1){
            			¡@¡@¡@¡@¡@¡@¡@¡@
						                    if(add[nowi2][nowj2].color=='n'){
            				¡@¡@¡@¡@¡@¡@¡@¡@
				                            move=0;
				                            nowchose=0;
											//move 
						                }else{
						                	if(add[nowi2][nowj2].chess=="king"){
						                		if(add[nowi2][nowj2].color=='r'){
						                			wincolor='b';
												}else{
													wincolor='r';
												}
											}
						                	//kill
						                	move=0;
				                            nowchose=0;
										}
										add[nowi2][nowj2] ={
            		                        	add[nowi1][nowj1].color,add[nowi1][nowj1].chess,nowi2,nowi2
				                            };
									    add[nowi1][nowj1] ={
            		                        	'n',"n",nowi1,nowi1;
				                            }
										if(color_now=='r'){
											color_now='b';
										}else{
											color_now='r';
										}
										for(int serchi=3;i<6;serchi++){
											for(int serchj=0;j<3;serchj++){
												if(add[serchi][serchj].chess=="king"&&add[serchi][serchj].color=="r"){
													for(int killj=serchj+1;killj<9;killj++){
														if(add[serchi][killj].chess!="king"){
															wincolor=color_now;
														}else if(add[serchi][killj].chess!="n"){
															goto nofarkill;
														}
													}
												}
											}
										}
										nofarkill:
										alt_video_display_clear_screen(display,0);	
										nr_pio_lcdwritemap_at(0, 0,data1_w,data1_h,gImage_data1,display);
										for(int rei=0;rei<9;rei++){
											for(int rej=0;rej<10;rej++){
												reload_diplay(rei,rej);
											}
										}
										alt_video_display_register_written_buffer(display);
										//reload paint
										if(wincolor!='n'){
											rehere=1;
											if(wincolor=='r'){
												vid_print_string(2000,500, BLUEVIOLET_24,cour10_font,display, "Red Winner_Touch_Screen");
											}else{
												vid_print_string(2000,500, BLUEVIOLET_24,cour10_font,display, "Black Winner_Tuch_Screen");
											}
										}
					            }else if(add[nowi1][nowj1].color==color_now) {
					            	nowchose=0;
					            	goto here1;
								}
            			        goto here0:
						}else{
							    here1:
							¡@¡@nowi1=i;
            			¡@¡@¡@¡@nowj1=j;
            			        if(add[nowi1][nowj1].chess!="n"&&add[nowi1][nowj1].color==color_now){
            			        	nowchose=1;
								}else{
								}
            			    ¡@¡@goto here;
						}	¡@¡@
					}
				¡@¡@}
		     	}
		        }else{
		        	//restart 
		        	goto rehere;
				}
				here:
		     		
		     	here0:
		     		
		     	// confirm is range
	        }

}


/*int t2(){

	 unsigned int TD_VALID;
	    unsigned int X, Y;
	    unsigned int TP_TMP=0;
	    //unsigned int X_tmp=0x00,Y_tmp=0x00;


	  // Initialize and start the LCD display
	  alt_video_display* display;
	  display = alt_video_display_init( LCD_SGDMA_NAME,         // char* sgdma_name
	                                    800,//ALT_VIDEO_DISPLAY_COLS,               // int width
	                                    600,//ALT_VIDEO_DISPLAY_ROWS,               // int height
	                                    ALT_VIDEO_DISPLAY_COLOR_DEPTH,        // int color_depth
	                                    ALT_VIDEO_DISPLAY_USE_HEAP,           // int buffer_location
	                                    ALT_VIDEO_DISPLAY_USE_HEAP,           // int descriptor_location
	                                    2 );                                  // int num_buffers
	    //clear display
	    alt_video_display_clear_screen ( display,0);

	        while(1)
	        {alt_video_display_clear_screen ( display,0);
	           //print chinse font
	         nr_pio_lcdwritemap_at(0, 0,sky_width,sky_height,sky,display);
	         nr_pio_lcdwritemap_at(0, 0,me_w,me_h,gImage_me,display);
	        	vid_print_string(500,10, WHITE_24,cour10_font,display, "date:2020_12/15");
	        	vid_print_string(500,40, WHITE_24,cour10_font,display, "stude id:108109244");
	        	vid_print_string(500,100, WHITE_24,cour10_font,display, "Name:Chen Wei_Ming");

	           //draw box

	           //draw circle

	           //display buffer
	           alt_video_display_register_written_buffer( display );
               usleep(100000);
	        }
	    alt_video_display_close( display,
	                           ALT_VIDEO_DISPLAY_USE_HEAP,
	                           ALT_VIDEO_DISPLAY_USE_HEAP  );

}*/

