#ifndef LCD_H_INCLUDED
#define LCD_H_INCLUDED

void Init();//TO INITIALISE PORTS

#define BUTTONSENSOR (!(PIND&(1<<PD0)))
#define HEATERSENSOR (!(PIND&(1<<PD1)))

#endif // LCD_H_INCLUDED
