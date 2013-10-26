#ifndef __ASM_H_
#define __ASM_H_

inline void hlt()
{
	asm volatile("cli")
	asm volatile("hlt");
}

#endif
