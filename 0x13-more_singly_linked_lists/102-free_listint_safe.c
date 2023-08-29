#include "lists.h"
/**
 * free_listint_safe - This one frees a list
 * @h: points to node 1
 * Return: how big the list that was freed was
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *store_here;
        size_t sze = 0;
        int rem;        

        if (!h || !*h)
                return (0); /*List is empty!*/

        for (; *h; ) /*Going through the list*/
        {
                rem = *h - (*h)->next; /*find the difference*/
                if (rem > 0) /*if it's positive*/
                {
                        store_here = (*h)->next; /*store the next node*/
                        free(*h); /*delete current node*/
                        *h = store_here; /*this is new head*/
                        sze++; /*increment node count*/
                }
                else
                {
                        free(*h); /*delete current node*/
                        *h = NULL; /*set head to null*/
                        sze++; /*increment node count*/
                        break; 
                }
        }

        *h = NULL; /*set head to null*/

        return (sze); /*return node count*/
}
