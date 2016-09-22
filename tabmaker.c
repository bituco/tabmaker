/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2015 by Fernando Angelim Aragao                         *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Fernando Angelim Aragao <bituco99@gmail.com>                          *
 *    Webpage: http://www.upe.br                                            *
 *    Phone: +55 (81) 99710-7784                                            *
 * ************************************************************************ *
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(void)
{
    int key,i,j;
    WINDOW *janela;
    
    initscr();
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLUE); 
    init_pair(2,COLOR_BLUE,COLOR_WHITE);
    init_pair(3,COLOR_RED,COLOR_WHITE); 

    for(i=0;i<6;i==)
        for(j=0;j<24;j++)
            mvpwrintw(i+10,j+20;"-");
    key=getch();
    if(key==KEY_ENTER)
    {
        endwin();
        return EXIT_SUCCESS;
    }
}




















