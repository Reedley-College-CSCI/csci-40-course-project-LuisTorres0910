[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Ay551EX-)
# CS1 Final Project - [Project Title]

## 1. Overview
- What problem does your project solve?  
- Briefly describe the purpose and key features of your program.

- the problem my project solves is an invenotry system that searches through a small list of cards and helps sort user's card collection, and also helps add to their personal collection
- the purpose of this program is to help user view cards avaialbe by sorting them by price, condition, or availability


---

## 2. Design Decisions
- What fundamental programming constructs and data types did you use, and why?
      for constructs i mainly used ... i mainly used string data types so that the user can input the card they are looking for
- Why did you choose to structure your data using structs?
      i chose to use a struct named cards so that it can hold information about the card, so that the user can see if its available, it price, its name, and its condition 
- How did you implement searching and sorting? What algorithms did you use and why?
      i used a bubble sort to filter the cards by price from lowest to highest and sort them by condition
- How do you ensure data persistence between program runs?
      i ensured data persisted between program runs by ...
- Did you consider alternative approaches? If so, why did you not use them?  
      yes i considered alternative appraoches. at first i had a bunch of if and else if loops and inside one option user enetered for, i had too many for loops that did the same but for differerent card availability
      so instead of all of those if loops, i used a swicth case functions, and instead of the bunch of for loops, i instead added function prototypes at the the top, called functions inside main, and defined the functions outside of amin at the bottom.
---

## 3. Testing Summary
- **Structured Testing Log:** Include a table with test cases, expected output, actual output, and pass/fail status.  
- What testing methods did you use?  
- Provide examples of test inputs (valid and invalid) and describe how your program responds.  

---

## 4. Technical Walkthrough
- Explain the main functionality of your program.  
- **Include a link to your required video demonstration** showcasing how the project works (**3-7 minutes**). 
    Make sure it shareable without approval needed.
      (the video for the code is a bit outdated as i have fixed up my code, and added alot more to it)
      https://youtu.be/Fh3EjJXL0tw?si=1sSbCtWc31eTTMkS



---

## 5. Challenges and Lessons Learned
- What challenges did you encounter while working on this project?
    a couple challenges i faced throughout this project is that i underestimated the difficulty, sure enough it was manageable but i had alot of fun ideas i wanted to include, like for example a trading feature where it reads different files that held other users card collections, add sales\promos for discounts on the cards. the main problem was constantly realising my code was too simple and needed to be fixed, but the more i tried to add features the harder it got and the more issues i encountered.
- What key lessons did you learn about programming and problem-solving?
  a key lesson i learned about programming is to manage time properly and really set some time in advance to know what you plan on working on, and a key lesson for problem-solving is to find where the errors are hiding from, and how to prepare for future errors in the code.

---

## 6. Future Improvements
- If you had more time, what changes or enhancements would you make?
      I think that if i had more time to this code i could've added alot more options for the user so that this code can sort of function like popular tcg websites
      where they have the option to add sales, and promo codes.
      also i think if i had more time i could've made the code much more simpler and esier to read
