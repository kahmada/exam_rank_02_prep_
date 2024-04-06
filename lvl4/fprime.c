/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:30:34 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/07 14:45:33 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
// la logique ici c'est que chaque fois on incremente on vois d abord est ce que ce nomre est primaire apres on check n%ce nombre si oui on l ecrit 
 void primeFactors(int n)
 {// c est la fonctio qui cherche les facteurs primaires
    int i = 2;
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n > 1)
                printf("*");
        }//n % i == 0 quant cette condition ne sera pas valise il passe au
        //else pour incrementer i et voir si le nomre est prime ou nn
        else
        {
            i++;//increment i 
            while (!isPrime(i))// check if prime or not if nor increment i again 
                i++;// und naturlich wenn es ist ersten dass pass auf zum ersten if
        }
    }
}
void is_prime(int n)
{
    int i;
    i = 2;
    if(n <= 1)
        return(0);
    while(i*i<n)
    {
        if(n%i==0)
            return(0);
        i++;
        
    }
    return(1); 
}
int main(int ac, char **av)
{
    int num = atoi(av[1]);
    if(ac == 2)
    {
        primeFactors(num);
    }
    write(1, "\n",1);
}