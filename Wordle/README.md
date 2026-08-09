<h1>Wordle for Arduboy</h1>

Wordle is a 5 character word guessing game made famous by the NY Times.

You can try Wordle online thank to the Arduboy player developed by the Ardens team,  [Wordle](https://tiberiusbrown.github.io/Ardens/player.html?file=https://raw.githubusercontent.com/RetroBW/Arduboy/refs/heads/main/Wordle/Wordle.hex).

The object is to guess a 5 letter word. You get 6 guesses. Each guess will provide the following clues.
<ul>
  <li><img src="images/CorrectLoc.png" alt="letter in correct location">
Letter is in word, and is in the correct location.</li>
  <li><img src="images/IncorrectLoc.png" alt="letter in incorrect location">Letter is in word, but is in the incorrect location.</li>
  <li><img src="images/Incorrect.png" alt="uncorrect letter">Letter is not in word.</li>
</ul>

Keyboard letters eliminated from word will be displayed in lower case.

The game ends when the correct is guessed, or 6 guesses have been used.
