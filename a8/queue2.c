/*
CH-230-A
a8_p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
#include "queue2.h"
 
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}
 
int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}
 
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}
 
int queue_item_count(const Queue *pq)
{
    return pq->items;
}
 
int enqueue(Item item, Queue *pq)
{
     Node *node;
    node=(Node *)malloc(sizeof(Node));
    node->item = item;
    node->next= NULL ;
    if(pq->items == 0){
        pq->front = node;
        pq->rear = node;
    }
    else{
        pq->rear->next=node;
        pq->rear=node;
    }
    pq->items++;
        return 0;
}
 
 int dequeue(Item *pitem, Queue *pq)
{
    *pitem = pq->front->item;
    pq->front= pq->rear;
    free(pitem);
    if (pq->front==NULL&&pq->rear==NULL)
    {
        return 0;
    }
    pq->items--;
        return 0;
}
 
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
