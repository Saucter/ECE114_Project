#ifndef ENEMY_DIALOGUES_H
#define ENEMY_DIALOGUES_H

#include "Dialogue.h"

const Dialogue SecurityGuard = {
    {
        "NARRATOR: A wild ECE114 student is seen in their natural habitat: Rush Rhees",
        "NARRATOR: As they are working on their game project, they suddenly remember...",
        "NARRATOR: THEY FORGOT THEIR FLASH DRIVE!",
        "PLAYER: Dude... I gotta stop using flash drives man... I gotta go to CSB now...",
        "NARRATOR: They get up... leaving their laptop and notes behind",
        "NARRATOR: The player recalls that they left their flash drive on a computer they were working on",
        "NARRATOR: On the 11th floor!!!",
        "NARRATOR: As they start walking to the building, it starts raining, and the sky turns dark",
        "PLAYER: What's going on all of a sudden?",
        "NARRATOR: Drenched, they get to the front of the building",
        "SECURITY GUARD: Hey! Where are you going?",
        "NARRATOR: A wild security guard appears!",
        "PLAYER: I forgot something, can I go in... also since when does CSB have a security guard?",
        "SECURITY GUARD: Not on my watch! Does int *ptr = 2; compile?",
        "PLAYER: What...?",
        "SECURITY GUARD: DON'T MESS WITH ME, DOES int *ptr = 2; COMPILE?",
        "PLAYER: Uuuh... no?",
        "NARRATOR: AND THE CRUEL PLAYER DAMAGES THE SECURITY GUARD!",
        "PLAYER: W- what? Wtf do you mean I damaged him?",
        "PLAYER: How does C++ trivia hurt, and why is a security guard asking me that?",
        "SECURITY GUARD: -5 damage",
        "PLAYER: Huh???",
        "NARRATOR: FIGHT!"
    },
    {
        "SECURITY GUARD: How are you this good?! You must be a threat to humanity!"
    },
    {
        "PLAYER: Is... is he dead?!",
        "NARRATOR: NO, YOU FOOL... He's just taking a nap...",
        "PLAYER: What's going on here?",
        "NARRATOR: The enemy has DROPPED a shint item. The player picks it up",
        "NARRATOR: To use the item, the player must type USE followed by the item's name?",
        "PLAYER: Uuuh?",
        "NARRATOR: You will get it.... don't worry.."
    }
};

const Dialogue ITAdmin = {
    {
        "NARRATOR: The player enters the elevator, but something feels... off.",
        "PLAYER: Wait, why did it only take me to the second floor? I clicked for the 11th!",
        "NARRATOR: Confused, they try to press the button again, but the screen flashes:",
        "\"Sign in with your account to proceed.\"",
        "PLAYER: Okay... let's see. [types password]",
        "ACCESS DENIED",
        "PLAYER: Huh? I know my password is right!",
        "NARRATOR: They call IT. After a brief hold...",
        "IT ADMIN: gruffly What's the problem? Can't handle a simple log-in?",
        "PLAYER: Yeah, my password isn't working, and I need to get to the 11th floor. Can you reset my account or something?",
        "IT ADMIN: suspiciously Oh, we'll see if you're worthy... Does this code snippet compile?",
        "int &ref = nullptr;",
        "PLAYER: Dude, what is it with people and C++ trivia?!",
        "NARRATOR: Before they can object further, the IT Admin starts throwing more questions!",
        "NARRATOR: FIGHT!"
    },
    {
        "IT ADMIN: You call that an answer? My grandmother knows C++ better than you!",
        "IT ADMIN: Forgot your password and your syntax, huh? Typical!",
        "IT ADMIN: Do you even read the standard library?!"
    },
    {
        "PLAYER: Finally! Are you going to fix my account now?",
        "IT ADMIN: groans Alright, fine! clicks keyboard furiously ...Done. But I'm watching you!",
        "NARRATOR: The player's password is reset, and the elevator unlocks... For one more floor.",
        "PLAYER: Are you kidding me? I'm still on the third floor?!",
        "NARRATOR: Shaking their head, they proceed up the stairs..."
    }
};

const Dialogue VendingMachine = {
    {
        "NARRATOR: The player arrives on the third floor, their spirits already dampened by the day.",
        "PLAYER: Alright, I just need some caffeine. A Celsius should do it.",
        "NARRATOR: They approach the vending machine, insert their money, and select their drink.",
        "NARRATOR: *CLUNK* Out comes... green tea?!",
        "PLAYER: Are you serious right now?! I didn't order this!",
        "NARRATOR: Frustrated, they try again, feeding more money into the machine.",
        "NARRATOR: *BEEP... WHIRRR... THUD* The machine jams.",
        "PLAYER: No. No, no, no. This isn't happening.",
        "NARRATOR: Suddenly, the vending machine begins to shake violently and emit strange sounds.",
        "VENDING MACHINE: YOU HAVE AWAKENED THE ANCIENT SPIRIT OF VENDI VIDI VICI THE ETERNAL!",
        "PLAYER: What...?",
        "VENDING MACHINE: FOOLISH MORTAL, TO RECEIVE YOUR PRECIOUS CAFFEINE, YOU MUST ANSWER THIS:",
        "std::vector<int> v(10); v[11] = 42; std::cout << v[11];",
        "PLAYER: Oh, come on! First guards, then IT, and now you?! Why is everything in this place obsessed with C++?!",
        "NARRATOR: The vending machine towers over the player, ready to fight.",
        "NARRATOR: FIGHT!"
    },
    {
        "VENDING MACHINE: ERROR 404: YOUR ANSWER NOT FOUND!",
        "VENDING MACHINE: PROCESSING... YOU'RE A TERRIBLE PROGRAMMER!",
        "VENDING MACHINE: DO YOU EVEN DEBUG, HUMAN?!"
    },
    {
        "PLAYER: Alright, alright, I give up! Just give me my Celsius!",
        "VENDING MACHINE: *CLUNK... PSHHH* Your overpriced sugar water, mortal.",
        "PLAYER: Finally! Was that so hard?",
        "NARRATOR: With their drink in hand, the player feels a rush of energy.",
        "NARRATOR: Fueled and focused, they march toward the stairs leading to the fourth floor."
    }
};

const Dialogue TAs = {
    {
        "NARRATOR: The player arrives on the fourth floor, only to be met by an ominous sight.",
        "NARRATOR: A group of TAs stands blocking the hallway, their eyes glowing faintly under the flickering fluorescent lights.",
        "PLAYER: Oh, hey guys! I just need to grab my flash drive. I left it back in class.",
        "NARRATOR: Silence. The TAs do not respond. They simply stand there, unmoving.",
        "PLAYER: Uh... hello? Can I just—",
        "TAs (in unison): YOU SHALL NOT PASS!",
        "PLAYER: What the—?!",
        "TAs (in unison): YOU DARE SCALE THIS BUILDING, MERE MORTAL?",
        "PLAYER: Look, I don't want any trouble. I just need my—",
        "TAs (in unison): SILENCE! ANSWER THIS IF YOU WISH TO PROCEED:",
        "for (int i = 0; i < 5; i++) { static int x = 0; x++; } std::cout << x;",
        "PLAYER: Oh, for the love of... Why is everyone in this place obsessed with C++?!",
        "NARRATOR: The TAs form a menacing circle, chanting snippets of code in perfect harmony.",
        "NARRATOR: FIGHT!"
    },
    {
        "TAs: Incorrect! Your code is deprecated... just like your brain!",
        "TAs: We expected better. Did you even visit office hours?!",
        "TAs: Have you even read *Effective C++*?!"
    },
    {
        "PLAYER: collapses to one knee Holy crap, what just happened...?",
        "NARRATOR: The TAs groan in unison and collapse to the ground, incapacitated.",
        "PLAYER: I... I think I just took out the entire TA team?!",
        "NARRATOR: The player barely has time to process the situation when it hits them: The deadline.",
        "PLAYER: Screw it. I don't have time for this!",
        "NARRATOR: Fueled by sheer determination (and a splash of caffeine), the player sprints up the stairs to the next floor."
    }
};

const Dialogue Coordinator = {
    {
        "NARRATOR: The player finally reaches the fifth floor, their energy waning but their resolve unshaken.",
        "NARRATOR: Standing near the hallway entrance is the department coordinator, a familiar face who's always been kind and helpful.",
        "PLAYER: Oh, finally! A normal person! I need some help—",
        "COORDINATOR: smiles Oh, hello, dear! You look like you've been through quite the ordeal. What can I do for you?",
        "PLAYER: Thank you! I just need to grab my flash drive. It's on the 11th floor, but this building's been... weird.",
        "COORDINATOR: Oh, the flash drive. I remember you leaving it behind. Such a busy student! Let me—",
        "NARRATOR: Suddenly, the coordinator's voice begins to distort. Their kind demeanor shifts as they freeze in place.",
        "COORDINATOR: *glitching* D-does this code compile?",
        "COORDINATOR: *void fun() { int a[10]; std::cout << a[10]; } IS THIS VALID?!",
        "PLAYER: No. No, no, no. Not you too!",
        "NARRATOR: The player glances at their watch. The deadline looms closer.",
        "PLAYER: Please forgive me for this.",
        "NARRATOR: The player clenches their fists and steps forward.",
        "NARRATOR: FIGHT!"
    },
    {
        "COORDINATOR: You call that an answer? Back in my day, we respected *undefined behavior*!",
        "COORDINATOR: You young people always forgetting to initialize your variables!",
        "COORDINATOR: Syntax error? More like life error!"
    },
    {
        "PLAYER: nervously Are you okay?",
        "COORDINATOR: groans and slowly reboots themselves Oh, my... what happened? Did I... glitch?",
        "PLAYER: sacrifices must be made I'm so sorry. I didn't want to do this, but...",
        "PLAYER: The deadline's in an hour, and I can't stop now.",
        "NARRATOR: Leaving the coordinator behind, the player steels their resolve and sprints to the next set of stairs."
    }
};


const Dialogue GhostOfRitchie = {
    {
        "NARRATOR: As the player ascends to the sixth floor, the air grows colder.",
        "PLAYER: Why is it suddenly freezing? This building gets weirder by the second.",
        "NARRATOR: The hallway ahead is shrouded in an eerie mist. The lights flicker ominously.",
        "PLAYER: Hello? Anyone here? I'm just trying to get my flash drive.",
        "NARRATOR: A faint voice echoes through the corridor.",
        "GHOST OF RITCHIE: Who dares disturb the sacred halls of programming lore?",
        "PLAYER: Uh... just a student trying to meet a deadline. No big deal.",
        "GHOST OF RITCHIE: Student? Deadline? I sense chaos... C... pointers... and improper memory management!",
        "PLAYER: Oh, come on. Not this again.",
        "NARRATOR: The mist thickens, coalescing into a spectral figure—the one, the only, Dennis Ritchie.",
        "PLAYER: Wait, is that...? Oh, you've got to be kidding me.",
        "GHOST OF RITCHIE: Your department's obsession with C has awakened me from eternal rest!",
        "PLAYER: Great. Now I'm being haunted by the inventor of C. This is just my luck.",
        "GHOST OF RITCHIE: SILENCE, FOOLISH MORTAL! ANSWER THIS, OR BE DOOMED TO SEGFAULT FOREVER:",
        "char *p = \"Hello\"; p[0] = 'h'; printf(\"%s\", p);",
        "PLAYER: Oh, come on! Can I just get my flash drive without a history lesson?!",
        "NARRATOR: The ghost wields a spectral keyboard, its keys glowing with unearthly light.",
        "NARRATOR: FIGHT!"
    },
    {
        "GHOST OF RITCHIE: Did you just dereference NULL? Amateur!",
        "GHOST OF RITCHIE: Your stack overfloweth, mortal!",
        "GHOST OF RITCHIE: This is why I invented C—to weed out the weak!"
    },
    {
        "PLAYER: collapses to the ground panting Are... are you done?",
        "GHOST OF RITCHIE: sighs and floats gently to the floor You have bested me... for now.",
        "PLAYER: So, can I go?",
        "GHOST OF RITCHIE: But beware... the legacy of C will haunt you always.",
        "PLAYER: Yeah, yeah. Thanks for the trauma.",
        "NARRATOR: As the ghost vanishes, the mist lifts, and the player spots a staircase to the seventh floor.",
        "PLAYER: I'm so done with this building. Let's just finish this already."
    }
};

const Dialogue ProfessorsCat = {
    {
        "NARRATOR: As the player reaches the seventh floor, they hear a soft sound echoing through the hallway.",
        "PLAYER: Is that... meowing?",
        "NARRATOR: A small, fluffy cat emerges from the shadows, its fur glimmering under the flickering lights.",
        "PLAYER: Oh, a cat! Finally, something normal.",
        "NARRATOR: The cat purrs, tilting its head innocently. It's wearing a tiny collar that reads: \"Hello Kitty.\"",
        "PLAYER: chuckles Of course. Should've guessed. Hey there, buddy! I don't suppose you know where my flash drive is?",
        "CAT: Meow.",
        "PLAYER: Aw, you're adorable. Come here!",
        "NARRATOR: As the player reaches out to pet the cat, its eyes glow a deep red.",
        "CAT: MEEEOOOOWWWWWRRRR!",
        "PLAYER: What the—?!",
        "CAT: *glitching* DOES... THIS... CODE... COMPILE?!",
        "std::vector<int> v(10); v[11] = 42; std::cout << v[11];",
        "PLAYER: Oh, come on! First ghosts, now cats? WHY IS EVERYTHING IN THIS BUILDING CURSED?!",
        "NARRATOR: The cat arches its back, claws sparking with unholy energy. It begins to hover in midair.",
        "NARRATOR: FIGHT!"
    },
    {
        "CAT: You've angered the compiler gods, human!",
        "CAT: How many lives do I have? More than your bug fixes, that's for sure!",
        "CAT: You call that code? My whiskers are more efficient!"
    },
    {
        "PLAYER: collapses to the floor You've got to be kidding me. Did I just fight a cat?",
        "CAT: purrs innocently again Meow.",
        "PLAYER: breathing heavily Yeah, yeah. Play innocent now. I see through you.",
        "NARRATOR: The cat gives the player a final judgmental glare and then vanishes into the shadows.",
        "PLAYER: muttering I can't believe this is my professor's cat... Makes sense, though. He's kind of a genius.",
        "NARRATOR: With what little energy they have left, the player pushes onward to the final floor.",
        "PLAYER: One more to go. Just one more."
    }
};

const Dialogue ProfessorLee = {
    {
        "NARRATOR: The player ascends to the final floor, heart pounding and mind racing.",
        "NARRATOR: As they push open the door to the 11th floor, they're greeted by a sight that stops them in their tracks.",
        "NARRATOR: There, sitting behind an impossibly large desk stacked with books, flash drives, and cups of coffee, is the legendary Prof. Lee.",
        "PLAYER: Professor Lee! Thank God. I've been trying to get my flash drive, but this building has been insane!",
        "PROF. LEE: calmly Ah, so you've made it this far. Impressive. Few students do.",
        "PLAYER: Wait... you knew this was happening?!",
        "PROF. LEE: adjusts glasses Let's just say... it's part of the curriculum. Real-world problem-solving, you know?",
        "PLAYER: Are you serious? I've been fighting vending machines, ghosts, and—your cat tried to kill me!",
        "PROF. LEE: smiles Hello Kitty does like to test students' resolve. But you... you've done well. There's just one final challenge.",
        "PLAYER: No, no, no. Please don't say it.",
        "PROF. LEE: calmly Does this code compile?",
        "template<typename T> void func(T&& t) { static_assert(sizeof(T) > 0, \"Type must not be empty.\"); } func(\"\");",
        "PLAYER: Oh, for the love of... WHY IS IT ALWAYS C++?!",
        "NARRATOR: Prof. Lee stands, the air around him crackling with an energy the player can only describe as... *professorial*.",
        "PROF. LEE: Show me what you've learned.",
        "NARRATOR: FIGHT!"
    },
    {
        "PROF. LEE: Your logic is as flawed as an infinite loop!",
        "PROF. LEE: I expected better. Did you even read the lecture slides?",
        "PROF. LEE: Impressive... but you still have much to learn."
    },
    {
        "PLAYER: panting on the floor Is... is it over?",
        "PROF. LEE: smiling Congratulations. You've passed my final test.",
        "PLAYER: Wait, really? No more code questions? No more evil vending machines?",
        "PROF. LEE: nods None. You've earned your flash drive. But remember, the true journey wasn't about retrieving the flash drive.",
        "PLAYER: Oh, here we go. What was it about then?",
        "PROF. LEE: The knowledge you gained along the way.",
        "PLAYER: ...You're unbelievable.",
        "PROF. LEE: chuckles Now go. Your deadline awaits. Make me proud.",
        "NARRATOR: With their flash drive finally in hand, the player rushes to the nearest computer lab.",
        "PLAYER: muttering to themselves I survived professors, ghosts, and C++ trivia... I can survive this deadline.",
        "NARRATOR: And as they plug in the flash drive, ready to finish their project, one thought crosses their mind:",
        "NARRATOR: This wasn't just about passing a class. This was about becoming a *programmer*."
    }
};

#endif