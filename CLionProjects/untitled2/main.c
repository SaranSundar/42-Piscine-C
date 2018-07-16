/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 09:27:20 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/23 11:10:04 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_putchar(char c);

void get_size(int size, int spaces, int run, int height) {
    int r;
    int c;
    int temp;
    int tempC;
    int step;
    int level;
    int space_count = 2;
    int ans;
    int final_level;
    int old_h;
    int old_spaces;
    int counter;
    int nxn = size;

    if (size == 0) {
        return;
    }
    if (nxn % 2 == 0) {
        nxn = nxn - 1;
    }

    final_level = size;
    old_spaces = spaces;
    step = 1;
    level = 0;
    old_h = 0;
    r = 3;
    c = 1;
    // go down levels
    while (size > 0) {
        temp = 0;
        // go through each level
        while (temp < r) {
            tempC = 0;
            while (tempC < spaces) {
                printf(" ");
                tempC++;
            }
            tempC = 0;
            // print / here
            if (run != 0) {
                printf("/");
            }
            while (tempC < c) {
                tempC++;
                // print * here
                if (run != 0) {
                    if (level == final_level - 1 && old_h >= height - nxn) {
                        counter = tempC + spaces;
                        if (counter > old_spaces - (nxn / 2) && counter <= old_spaces + (nxn / 2) + 1) {
                            if (old_h == height - ((nxn / 2) + 1) && counter == old_spaces + (nxn / 2) && final_level >= 5) {
                                printf("$");
                            } else {
                                printf("|");
                            }
                        } else {
                            printf("*");
                        }
                    } else {
                        printf("*");
                    }
                }
            }
            if (run != 0) {
                printf("\\\n");
            }
            // print / here
            temp++;
            old_h++;
            c = c + 2;
            if (run != 0) {
                spaces--;
            }
        }
        size--;
        if (size > 0) {
            // at the end of each level increment step and r and c and level
            c = c + 2;
            c = c + (step * 2);
            if (run != 0) {
                spaces = spaces - space_count;
            }
            level++;
            if (level % 2 == 0) {
                step++;
                space_count++;
            }
            r++;
        }
    }
    ans = ((c / 2) - 1);
    if (run == 0) {
        return get_size(final_level, ans, 1, old_h);
    } else {
        return;
    }
}

int main() {
    get_size(9, 0, 0, 0);
    return 0;
}