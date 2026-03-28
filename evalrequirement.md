!!! 100 random value -> 817-1221, sometime time out
!!! 500 random value -> 8043-9222, sometime time out

!!!got issue: ./push_swap 36595 48640 12083 6995 41654 8007 20870 31288 12459 38094

//print_stack(stack_a.head, &stack_a);
	print_stack(stack_a->head, stack_a);
	printf("============================\n");
	print_stack(stack_b->head, stack_b);

static void    print_stack(t_node *head, t_stack *stack)
{
    t_node    *current;
    int            i;

    current = head;
    i = 0;
    while (i < stack->size)
    {
        printf("Node %d: %d\n",i, current->num);
        current = current->next;
        i++;
    }
}

//Error
non numeric parameter >>> print Error\n
duplicate numeric parameter >>> print Error\n
!!! numeric parameter + greater than maxint	>>> print Error\n
without parameter >>> display nothing

//Sorted list
push_swap 42 >>> display nothing
push_swap 2 3 >>> display nothing
push_swap 0 1 2 3 >>> display nothing
push_swap 0 1 2 3 4 5 6 7 8 9 >>> display nothing
push_swap <any sorted values> >>> display nothing

//Simple version
push_swap 2 1 0 >>> display 2 or 3 instructions
push_swap <any 3 random values> >>> display 0 - 3 instructions
push_swap 1 5 2 4 3 >>> display <12 instructions, even better is <8 instructions
push_swap <any 5 random values>  >>> display <12 instructions

//Middle version
push_swap <any 100 random values>  >>> display <700 instructions

//Advance version
push_swap <any 500 random values>  >>> display <5500 instructions