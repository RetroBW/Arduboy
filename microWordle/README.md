<h1>&micro;Wordle for Arduboy</h1>

&micro;Wordle is a 5 character word guessing game made famous by the NY Times.

You can try &micro;Wordle online thank to the Arduboy player developed by the Ardens team,  [&micro;Wordle](https://tiberiusbrown.github.io/Ardens/player.html?file=https://raw.githubusercontent.com/RetroBW/Arduboy/refs/heads/main/Wordle/Wordle.hex).

The object is to guess a 5 letter word. You get 6 guesses. Each guess will provide the following clues.
<ul>
  <li><img src="images/CorrectLoc.png" width="30" alt="letter in correct location"> 
Letter is in word, and is in the correct location.</li>
  <li><img src="images/IncorrectLoc.png" width="30" alt="letter in incorrect location"> Letter is in word, but is in the incorrect location.</li>
  <li><img src="images/Incorrect.png" width="30" alt="incorrect letter"> Letter is not in word.</li>
</ul>

Keyboard letters eliminated from word will be displayed in lower case.

The game ends when the correct is guessed, or 6 guesses have been used.
