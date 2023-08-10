while (node_pointer != NULL)
	{
		printf("inwhile\n");
		printf("%p %s %s %p\n", (void *)node_pointer, node_pointer->key, node_pointer->value, (void *)node_pointer->snext);
		if (node_pointer->snext != NULL)
		{
			printf("notnull\n");
			if (strcmp(node_pointer->key, newnode->key) > 0)
			{ /* if 1st one is after 2nd one in alphabet*/
				if (node_pointer->sprev != NULL)
					node_pointer->sprev->next = newnode;
				else
					ht->shead = newnode;
				node_pointer->next->sprev = newnode;
				newnode->sprev = node_pointer->sprev;
				newnode->snext = node_pointer;
				return (1);
			}
		}
		else
		{
			printf("null\n");
			newnode->snext = node_pointer->snext;
			newnode->sprev = node_pointer;
			newnode->sprev->snext = newnode;
			ht->stail = newnode;
			return (1);
		}
		/*node_pointer = node_pointer->snext;*/
	}
