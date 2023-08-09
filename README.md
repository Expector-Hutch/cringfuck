![Cringfuck](./logo.jpg)
# cringfuck
[开发中] Bringfuck but like c. C语言般的Bringfuck。

| BF  | C                |
|-----|------------------|
| `>` | `++ptr;`         |
| `<` | `--ptr;`         |
| `+` | `++*ptr;`        |
| `-` | `--*ptr;`        |
| `.` | `putchar(*ptr);` |
| `,` | `*ptr =getch();` |
| `[` | `while (*ptr) {` |
| `]` | `}`              |