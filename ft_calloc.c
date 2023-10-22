#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void	*mm;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		mm = malloc(0);
		return (mm);
	}
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	mm = malloc(total_size);
	if (!mm)
		return (NULL);
	ft_bzero(mm, total_size);
	return (mm);
}
