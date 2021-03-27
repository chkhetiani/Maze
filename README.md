# Maze

## Maze project for uglimes class

Description:

1. print game info
2. print menu
   1. level selector
3. game stater (bazidan kitxulobs dafas + svlebis raodenobas)
4. game:

   1. drawer
   2. input getter
   3. move maker (shecdoma || svla gaaktos)
   4. winchecher

5. process and print game info (qula)

GOTO: 2

File standard:

```
5 // simagle
5 // sigane
2 // chemi pozicia y
3 // chemi pozicia x
4 // goal y
3 // goal x
4 // move count
+---+
|---|
|- @|
|-  |
+--x+
```

### player

1. current position `level start position`
2. icon `load from icon.txt || get icon from cin`

---

### menu

1. level count `const`
2. max level unlocked `load from level.txt`

---

### level `load from x.txt`

1. height
2. width
3. player start position
4. goal position
5. move count
6. map (char[][])

---

1. game

   1. current_player
      1. current_position
         1. x
         2. y
      2. icon
   2. current_level
      1. number
      2. height
      3. width
      4. start_position
         1. x
         2. y
      5. goal_position
         1. x
         2. y
      6. move_count
      7. map

2. menu
   1. level_count
   2. max_level

---

print_level_list example:

```
1.
2. [locked]
3. [locked]
4. [locked]
```
