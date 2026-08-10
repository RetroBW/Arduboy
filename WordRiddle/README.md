<h1>WordRiddle for Arduboy</h1>

WordRiddle is a 5 character word guessing game inspired by the NY Times Wordle game.

You can try WordRiddle online thank to the Arduboy player developed by the Ardens team using the link,  [WordRiddle](https://tiberiusbrown.github.io/Ardens/player.html?file=https://raw.githubusercontent.com/RetroBW/Arduboy/refs/heads/main/WordRiddle/WordRiddle.hex).

The object is to guess a 5 letter word. You get 6 guesses. Each guess will provide the following clues.
<ul>
  <li><img src="images/CorrectLoc.png" width="30" alt="letter in correct location"> 
When a letter is in the word, and is in the correct location the letter will be hi-lighted using a box.</li>
  <li><img src="images/IncorrectLoc.png" width="30" alt="letter in incorrect location"> When a letter is in word, but is in the incorrect location the letter will be hi-lighted using an underscore.</li>
  <li><img src="images/Incorrect.png" width="30" alt="incorrect letter"> When the letter is not in word the letter will not be hi-lighted.</li>
</ul>

Keyboard letters eliminated from word will be displayed in lower case.

The game ends when the correct is guessed, or 6 guesses have been used.
