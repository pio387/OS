struct idt_entry_struct
{
	u16int base_low; /* first 16 bits for adress to jump, where the interrupts fire */ 
	u16int kss; /* Kernel segment selector */
	u8int always0; /* Always zero */
	u8int flags; /* interrupt flag, more in documentation */
	u16int base_high; /* adress where to jump to */
	} __attribute__((packed)) 
typedef struct idt_entry_struct idt_entry_t;

struct idt_pointer
{
        u16int limit;
        u32int base;
}__attribute((packed))

/* Here we have handlers to Interrupt Service Routines */

extern void int_1();
extern void int_2();
extern void int_3();
extern void int_4();
extern void int_5();
extern void int_6();
extern void int_7();
extern void int_8();
extern void int_9();
extern void int_10();
extern void int_11();
extern void int_12();
extern void int_13();
extern void int_14();
extern void int_15();
extern void int_16();
extern void int_17();
extern void int_18();
extern void int_19();
extern void int_20();
extern void int_21();
extern void int_22();
extern void int_23();
extern void int_24();
extern void int_25();
extern void int_26();
extern void int_27();
extern void int_28();
extern void int_29();
extern void int_30();
extern void int_31();
