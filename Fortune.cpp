#include "Fortune.h"
#include <stdlib.h>

Fortune::Fortune() {
  sign = Horoscopes();
  luck = 0;
}

Fortune::Fortune(Horoscopes h) {
  sign = h;
  luck = rand() % 100 + 1;
}
    
void Fortune::Romance() {
  if (sign.getStarSign() == "Aries") {
    cout << "Get out of your comfort zone and chase that girl or boy or whatever your preference is! ((:" << endl;
  }
  else if (sign.getStarSign() == "Taurus") {
    cout << "Love is in the air, but so are the ashes." << endl;
  }
  else if (sign.getStarSign() == "Gemini") {
    cout << "Your two-faced nature chased your crush away. oops :((" << endl;
  }
  else if (sign.getStarSign() == "Cancer") {
    cout << "Your kindness seems to attract all of the ladies today." << endl;
  }
  else if (sign.getStarSign() == "Leo") {
    cout << "Roarr!!! you think everyone loves you, but you're the only one loving." << endl; 
  }
  else if (sign.getStarSign() == "Virgo") {
    cout << "You're down to do anything that your partner wishes to do. I guess you're not an up dog because you're always down to do things." << endl;
  }
  else if (sign.getStarSign() == "Libra") {
    cout << "Your judging nature prevents you from giving your love interest a chance. Stop that." << endl;
  }
  else if (sign.getStarSign() == "Scorpio") {
    cout << "You can't seem to get passed the physical attraction stage. Time to get deeper than that" << endl;
  }
  else if (sign.getStarSign() == "Sagittarius") {

  }
  else if (sign.getStarSign() == "Capricorn") {
    cout << "Surprising your love interest with homecook meals and showering them with love is what you do best. You love spoiling your partner!" << endl;
  }
  else if (sign.getStarSign() == "Aquarius") {
    cout << "You're better off single because no man or woman should tie you down." << endl;
  }
  else if (sign.getStarSign() == "Pisces") {
    cout << "You are very needy and you require your partner to shower you with lots of love to feel secured in the relationship." << endl;
  }
}

void Fortune::CompatabilityWithSigns(const string & otherSign) {
  if (sign.getStarSign() == "Aries") {
    if (otherSign == "Aries"){
      cout << "OMG y'all are gonna be besties! SUPER compatible." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Keep away from this person. They are highly incompatible with you. " << endl;
    }else if (otherSign == "Gemini"){
      cout << "They are not of woman born. Beware." << endl;
    }else if (otherSign == "Cancer"){
      cout << "Wow. You're not compatible at all. Sucks to be you." << endl;
    }else if (otherSign == "Leo"){
      cout << "Wow! The two of you are so compatible it makes me want to cry!" << endl;
    }else if (otherSign == "Virgo"){
      cout << "ERROR ERROR 404 COMPATIBILITY CAN NOT BE DETERMINED." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "You two are compatible, but not in a BFF sort of way." << endl;
    }else if (otherSign == "Libra"){
      cout << "Your compatibility is so-so." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Your compatability is abysmal. Why are you even trying?" << endl;
    }else if (otherSign == "Capricorn"){
      cout << "You're so compatible you can be twins!" << endl;
    }else if (otherSign == "Aquarius"){
      cout << "You have the same level of compatibility as an angry customer and an underpaid retail worker." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Average compatibility." << endl;
      
    }
  }
  else if (sign.getStarSign() == "Taurus") {
    if (otherSign == "Aries"){
      cout << "OMG y'all are gonna be besties! SUPER compatible." << endl;
    }else if (otherSign == "Taurus"){
      cout << "As compatible as oil and water lol." << endl;
    }else if (otherSign == "Gemini"){
      cout << "The both of you are super compatible!" << endl;
    }else if (otherSign == "Cancer"){
      cout << "Eh. Your compatibility could be better, but it also could be worse, catch my drift?" << endl;
    }else if (otherSign == "Leo"){
      cout << "Holy cow. Your compatibility is so bad, it makes me almost feel bad for you." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Since your compatibility so high, I'm sure that the two of you could be great friends!" << endl;
    }else if (otherSign == "Libra"){
      cout << "Amazing! I never would have thought that the two of you would have such high compatibility!" << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Meh compatibility." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Your compatibility... let's just say that the two of you should not work as a team..." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Terrible compatibility. Don't bother with this one." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "Above average compatibility. The two of you could work together, but that's about it." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Compatibility could be worse, I guess. Don't get your hopes up." << endl;
    }
  }
  else if (sign.getStarSign() == "Gemini") {
    if (otherSign == "Aries"){
      cout << "They are not of woman born. Beware." << endl;
    }else if (otherSign == "Taurus"){
      cout << "The both of you are super compatible!" << endl;
    }else if (otherSign == "Gemini"){
      cout << "Well... let's just say that the both of you are more compatible with other people." << endl;
    }else if (otherSign == "Cancer"){
      cout << "I get it. The two of you are super compatible. Stop flexing." << endl;
    }else if (otherSign == "Leo"){
      cout << "O-oh. I'm so sorry. Your compatibility... well, it's not the best." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Amazing! I've never seen compatibility so high before!" << endl;
    }else if (otherSign == "Libra"){
      cout << "LOL. Look at this trash compatability." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Compatibility could be better, but it's not bad either." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Eh. Compatibility could be better." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Cats and dogs have better compatibility than you two." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "Wow. The two of you are like two sides of the same coin! Super compatible!" << endl;
    }else if (otherSign == "Pisces"){
      cout << "Mediocre compatiblity." << endl;
    }
  }
  else if (sign.getStarSign() == "Cancer") {
    if (otherSign == "Aries"){
      cout << "Wow. You're not compatible at all. Sucks to be you." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Eh. Your compatibility could be better, but it also could be worse, catch my drift?" << endl;
    }else if (otherSign == "Gemini"){
      cout << "I get it. The two of you are super compatible. Stop flexing." << endl;
    }else if (otherSign == "Cancer"){
      cout << "Man. You two vibe so well with each other." << endl;
    }else if (otherSign == "Leo"){
      cout << "What the hell. How did you get such a low compatibility?" << endl;
    }else if (otherSign == "Virgo"){
      cout << "The two of you will be great together in everything that you do!" << endl;
    }else if (otherSign == "Libra"){
      cout << "Imagine having good compatability. You two can't relate SMH." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "You two have the potential to become besties!" << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Great compatibility!" << endl;
    }else if (otherSign == "Capricorn"){
      cout << "I don't think that the two of you should talk to each other, judging by your compatibility." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "What's a low compatibility?You two wouldn't know!" << endl;
    }else if (otherSign == "Pisces"){
      cout << "Awesome compatibility. Keep it up you two!" << endl;
    }
  }
  else if (sign.getStarSign() == "Leo") {
    if (otherSign == "Aries"){
      cout << "Wow! The two of you are so compatible it makes me want to cry!" << endl;
    }else if (otherSign == "Taurus"){
      cout << "Holy cow. Your compatibility is so bad, it makes me almost feel bad for you." << endl;
    }else if (otherSign == "Gemini"){
      cout << "O-oh. I'm so sorry. Your compatibility... well, it's not the best." << endl;
    }else if (otherSign == "Cancer"){
      cout << "What the hell. How did you get such a low compatibility?" << endl;
    }else if (otherSign == "Leo"){
      cout << "Compatibility could be worse, I guess. Don't get your hopes up." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Meh. Don't get your hopes up." << endl;
    }else if (otherSign == "Libra"){
      cout << "OMG y'all are gonna be besties! SUPER compatible." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "The both of you are super compatible!" << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "O-oh. I'm so sorry. Your compatibility... well, it's not the best." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "ERROR ERROR 404 COMPATIBILITY CAN NOT BE DETERMINED." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "As compatible as a snake and a mongoose." << endl;
    }else if (otherSign == "Pisces"){
      cout << "You have the same level of compatibility as an angry customer and an underpaid retail worker." << endl;
    }
  }
  else if (sign.getStarSign() == "Virgo") {
    if (otherSign == "Aries"){
      cout << "ERROR ERROR 404 COMPATIBILITY CAN NOT BE DETERMINED." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Since your compatibility so high, I'm sure that the two of you could be great friends!" << endl;
    }else if (otherSign == "Gemini"){
      cout << "Amazing! I've never seen compatibility so high before!" << endl;
    }else if (otherSign == "Cancer"){
      cout << "The two of you will be great together in everything that you do!" << endl;
    }else if (otherSign == "Leo"){
      cout << "OMG y'all are gonna be besties! SUPER compatible." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Welp. That could be better." << endl;
    }else if (otherSign == "Libra"){
      cout << "Welp. That could be worse" << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Better compatibility than YOUR MOM xd." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Not compatible." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Very compatible." << endl;
    }else if (otherSign == "Aquarius"){
        cout << "I don't know. I'm a program lol." << endl;
    }else if (otherSign == "Pisces"){
        cout << "Wow. Compatability at an all-time low!" << endl;
    }
  }
  else if (sign.getStarSign() == "Libra") {
    if (otherSign == "Aries"){
      cout << "Your compatibility is so-so." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Amazing! I never would have thought that the two of you would have such high compatibility!" << endl;
    }else if (otherSign == "Gemini"){
      cout << "LOL. Look at this trash compatability." << endl;
    }else if (otherSign == "Cancer"){
      cout << "Imagine having good compatability. You two can't relate SMH." << endl;
    }else if (otherSign == "Leo"){
      cout << "OMG y'all are gonna be besties! SUPER compatible." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Welp. That could be better." << endl;
    }else if (otherSign == "Libra"){
      cout << "Honestly, compatibility could be better." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Honestly, compatibility could be worse." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Honestly, compatibility doesn't matter." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Who cares about compatibility. Just be friends." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "I get along better with my mother-in-law." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Great Compatibility. Keep it up." << endl;
    }
  }
  else if (sign.getStarSign() == "Scorpio") {
    if (otherSign == "Aries"){
      cout << "You two are compatible, but not in a BFF sort of way." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Meh compatibility." << endl;
    }else if (otherSign == "Gemini"){
      cout << "Compatibility could be better, but it's not bad either." << endl;
    }else if (otherSign == "Cancer"){
      cout << "You two have the potential to become besties!" << endl;
    }else if (otherSign == "Leo"){
      cout << "The both of you are super compatible!" << endl;
    }else if (otherSign == "Virgo"){
      cout << "Better compatibility than YOUR MOM xd." << endl;
    }else if (otherSign == "Libra"){
      cout << "Honestly, compatibility could be worse." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Your compatibility is out of this world!" << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "OMG. You guys should NOT be hanging out with THAT compatibility." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Welp. That compatability sucks. Better luck next time!" << endl;
    }else if (otherSign == "Aquarius"){
      cout << "I love it when two people are absolutely incompatible with each other!" << endl;
    }else if (otherSign == "Pisces"){
      cout << "You two have a relatively high compatibility." << endl;
    }
  }
  else if (sign.getStarSign() == "Sagittarius") {
    if (otherSign == "Aries"){
      cout << "Your compatability is abysmal. Why are you even trying?" << endl;
    }else if (otherSign == "Taurus"){
      cout << "Your compatibility... let's just say that the two of you should not work as a team..." << endl;
    }else if (otherSign == "Gemini"){
      cout << "Eh. Compatibility could be better." << endl;
    }else if (otherSign == "Cancer"){
      cout << "Great compatibility!" << endl;
    }else if (otherSign == "Leo"){
      cout << "O-oh. I'm so sorry. Your compatibility... well, it's not the best." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Not compatible." << endl;
    }else if (otherSign == "Libra"){
      cout << "Honestly, compatibility doesn't matter." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "OMG. You guys should NOT be hanging out with THAT compatibility." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Both of you will get along very well." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Your compatability is like my will to live: nonexistent." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "Compatability is off the charts!..into the negatives." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Compatability is off the charts!" << endl;
    }
  }
  else if (sign.getStarSign() == "Capricorn") {
    if (otherSign == "Aries"){
      cout << "You're so compatible you can be twins!" << endl;
    }else if (otherSign == "Taurus"){
      cout << "Terrible compatibility. Don't bother with this one." << endl;
    }else if (otherSign == "Gemini"){
      cout << "Cats and dogs have better compatibility than you two." << endl;
    }else if (otherSign == "Cancer"){
      cout << "I don't think that the two of you should talk to each other, judging by your compatibility." << endl;
    }else if (otherSign == "Leo"){
      cout << "ERROR ERROR 404 COMPATIBILITY CAN NOT BE DETERMINED." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Very compatible." << endl;
    }else if (otherSign == "Libra"){
      cout << "Who cares about compatibility. Just be friends." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "Welp. That compatability sucks. Better luck next time!" << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Your compatability is like my will to live: nonexistent." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Your compatability is average at best." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "You two have an above average compatability." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Amazing compatability you two!" << endl;
    }
  }
  else if (sign.getStarSign() == "Aquarius") {
    if (otherSign == "Aries"){
      cout << "You have the same level of compatibility as an angry customer and an underpaid retail worker." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Above average compatibility. The two of you could work together, but that's about it." << endl;
    }else if (otherSign == "Gemini"){
      cout << "Wow. The two of you are like two sides of the same coin! Super compatible!" << endl;
    }else if (otherSign == "Cancer"){
      cout << "Wow. The two of you are like two sides of the same coin! Super compatible!" << endl;
    }else if (otherSign == "Leo"){
      cout << "As compatible as a snake and a mongoose." << endl;
    }else if (otherSign == "Virgo"){
      cout << "I don't know. I'm a program lol." << endl;
    }else if (otherSign == "Libra"){
      cout << "I get along better with my mother-in-law." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "I love it when two people are absolutely incompatible with each other!" << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Compatability is off the charts!..into the negatives." << endl;
    }else if (otherSign == "Capricorn"){
      cout << "You two have an above average compatability." << endl;
    }else if (otherSign == "Aquarius"){
      cout << "YOOOOOOOO. That compability tho. SO BAD." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Your compatability is pretty mediocre." << endl;
    }
  }
  else if (sign.getStarSign() == "Pisces") {
    if (otherSign == "Aries"){
      cout << "Average compatibility." << endl;
    }else if (otherSign == "Taurus"){
      cout << "Compatibility could be worse, I guess. Don't get your hopes up." << endl;
    }else if (otherSign == "Gemini"){
      cout << "Mediocre compatiblity." << endl;
    }else if (otherSign == "Cancer"){
      cout << "Awesome compatibility. Keep it up you two!" << endl;
    }else if (otherSign == "Leo"){
      cout << "You have the same level of compatibility as an angry customer and an underpaid retail worker." << endl;
    }else if (otherSign == "Virgo"){
      cout << "Wow. Compatability at an all-time low!" << endl;
    }else if (otherSign == "Libra"){
      cout << "Great Compatibility. Keep it up." << endl;
    }else if (otherSign == "Scorpio"){
      cout << "You two have a relatively high compatibility." << endl;
    }else if (otherSign == "Sagittarius"){
      cout << "Compatability is off the charts!" << endl;
    }else if (otherSign == "Capricorn"){
      cout << "Amazing compatability you two!" << endl;
    }else if (otherSign == "Aquarius"){
      cout << "Your compatability is pretty mediocre." << endl;
    }else if (otherSign == "Pisces"){
      cout << "Ayyyy. That compatability is pretty neat. Very cool." << endl;
    }    
  }
}

void Fortune::Finance() {
  if (sign.getStarSign() == "Aries") {
    cout << "Ay. You're gonna make hella bank in the near future. Keep it up my mate." << endl;
  }
  else if (sign.getStarSign() == "Taurus") {
    cout << " Your bank accounts will fall into the negatives, and debt will follow you like a fly clings to manure." << endl;
  }
  else if (sign.getStarSign() == "Gemini") {
    cout << "You will face economic turmoil in the future." << endl;
  }
  else if (sign.getStarSign() == "Cancer") {
    cout << "Your financial situation will stay roughly the same." << endl;
  }
  else if (sign.getStarSign() == "Leo") {
    cout << "Your financial situation will get slightly worse. Like getting your car towed kinda worse." << endl;
  }
  else if (sign.getStarSign() == "Virgo") {
    cout << "You will gain a small fortune. Like finding a penny on the street kinda small, but hey, it's better than nothing amiright?" << endl;
  }
  else if (sign.getStarSign() == "Libra") {
    cout << "Good new: Your finances won't get worse! Bad news: They won't get any better." << endl;
  }
  else if (sign.getStarSign() == "Scorpio") {
    cout << "If you invest in stocks right now your financial situation may get better. It may also get worse. Don't look at me, I'm not an economist." << endl;
  }
  else if (sign.getStarSign() == "Sagittarius") {
    cout << "Work hard and your efforts will see monetary gains." << endl;
  }
  else if (sign.getStarSign() == "Capricorn") {
    cout << "Yeah... you're going to be broke... but at least you get this nice fortune ;)" << endl;
  }
  else if (sign.getStarSign() == "Aquarius") {
    cout << "Follow your inspirations first, and money will follow you." << endl;
  }
  else if (sign.getStarSign() == "Pisces") {
    cout << "You'll hit it rich if you climb the coporate ladder. Good luck buddy." << endl;
  }
}

void Fortune::Personality() {
  if (sign.getStarSign() == "Aries") {
    cout << "Aries is the first sign of the Zodiac, they are usually the first to take action in situations. Because of the ruling planet Mars and their element fire they are considered one of the most active Zodiac signs. They possess a youthful energy regardless what age they are. They display a passion for life itself unmatched by other signs." << endl;
  }
  else if (sign.getStarSign() == "Taurus") {
    cout << "Taurus are able to see life from a realistic and grounded perspective. Although stubbornness can be one of their weaknesses, it can also be seen as a positive attribute because they can stay on the same projects for years or until they are completed. This makes them excellent employers, great long-term friends, and partners." << endl;
  }
  else if (sign.getStarSign() == "Gemini") {
    cout << "Gemini’s are social, communicative and ready for fun! Because of their dual personality they can sometimes be serious and very curious, they seek to learn everything about the world that they possibly can! People that are born in this sign feel as though their other half is missing, so they are constantly searching for new people to talk to." << endl;
  }
  else if (sign.getStarSign() == "Cancer") {
    cout << "Cancer’s strengths include highly imaginative, loyal and sympathetic. Their weaknesses include being moody and manipulative. Cancers are extremely emotional and sensitive and enjoy being connected to their home. They care deeply for their families and are attached to their close friends. Those born with their sun sign in cancer can empathize with people and their pain. Cancer is a water sign so because of their emotions, they have a hard time blending into the world around them." << endl;
  }
  else if (sign.getStarSign() == "Leo") {
    cout << "Leos are natural-born leaders. They are self-confident and creative, they will be able to succeed in whatever field they chose to commit to in their lives. They often have many friends because they are generous, loyal and warm-hearted. On the other hand, Leos are on a quest for self-awareness and growth and this may come off to others as egotistical." << endl;
  }
  else if (sign.getStarSign() == "Virgo") {
    cout << "Virgos are considered the most careful signs of the Zodiac. Virgos do not go throughout life without as many things in their lives being as planned out as possible. This sign is often misunderstood because of their inability to accept their feelings as valid. Since Virgo is under the planet Mercury, Virgos can have a well-developed sense of speech and writing." << endl;
  }
  else if (sign.getStarSign() == "Libra") {
    cout << "Libra’s strengths include being cooperative and fair-minded. Their weaknesses include indecisiveness and avoiding confrontation. Libras are fascinated by balance. They also avoid conflict like it is the plague, in favor of peace whenever possible. They must remember that they have their own opinion. As Libra is an Air sign, this gives Libra’s in a constant search for knowledge. Their lives need to be enriched with music and art." << endl;
  }
  else if (sign.getStarSign() == "Scorpio") {
    cout << "Scorpio’s strengths are being brave and resourceful. Their weaknesses are being jealous and secretive.Scorpios are passionate, brave and assertive people. Because of this, they approach life with fierce tenacity. They value honesty and will keep your secrets. They are known for their calm behavior and their mysterious aura. They hate dishonesty." << endl;
  }
  else if (sign.getStarSign() == "Sagittarius") {
    cout << "Sagittarius’s strengths include being idealistic and a great sense of humor. Their weaknesses include being unfiltered and very impatient. People that are born under this sign are extroverted, enthusiastic and dynamic. Freedom is most revered by people born under this sign because then they can travel and explore the world and other cultures. They often can impatient when faced with things they desire and must learn to express themselves in a way that respects others as well." << endl;
  }
  else if (sign.getStarSign() == "Capricorn") {
    cout << "The last earth sign of the zodiac, Capricorn is represented by the sea goat, a mythological creature with the body of a goat and tail of a fish. Accordingly, Capricorns are skilled at navigating both the material and emotional realmsCapricorn’s strengths include being responsible, disciplined and having self-control. Their weaknesses include being a know-it-all and being unforgiving. People born under this sign, have a sense of inner independence that helps them push forward to achieve their personal and professional goals. They are experts at making plans and following through with them. They are the masters of self-control." << endl;
  }
  else if (sign.getStarSign() == "Aquarius") {
    cout << "Aquarius’s strengths include being progressive, original and independent. Their weaknesses include running from emotional expression. Aquarius are deep thinkers who love helping people. They feel comfortable being a group or a community so they are constantly trying to be surrounded by other people. They can come off as aloof, this is because they want to establish trust so they can express their emotions in a healthy way." << endl;
  }
  else if (sign.getStarSign() == "Pisces") {
    cout << "Pisces strengths include being compassionate and intuitive. Their weaknesses include a desire to escape reality and self-pity.Pisces are very friendly and usually find themselves in the company of different types of people. Pisces are willing to help others and love to give back. They are intuitive, caring and faithful. Pisces are very connected to music and various types of art. They are true romantics." << endl;
  }
}

void Fortune::QuarantineLifestyle() {
  cout << "Just stay inside." << endl;
}

void Fortune::Mood() {
  if (sign.getStarSign() == "Aries") {
    cout << "You seem to be irritated today. Is something bothering you?" << endl;
  }
  else if (sign.getStarSign() == "Taurus") {
    cout << "You're feeling pretty optimistic. The future is looking pretty bright ahead!" << endl;
  }
  else if (sign.getStarSign() == "Gemini") {
    cout << "You're very hyper! Maybe you should go outside and release that energy." << endl;
  }
  else if (sign.getStarSign() == "Cancer") {
    cout << "You're feeling relaxed and nothing is worrying you. Nothing like a nice cup of tea soothing you." << endl;
  }
  else if (sign.getStarSign() == "Leo") {
    cout << "You seem to be curious about something. What is it?" << endl;
  }
  else if (sign.getStarSign() == "Virgo") {
    cout << "You're feeling anxious. What's troubling you? Perhaps you should talk about your situation with a loved one." << endl;
  }
  else if (sign.getStarSign() == "Libra") {
    cout << "You're feeling exhausted. You should take a break. A massage would help and ease your pain." << endl;
  }
  else if (sign.getStarSign() == "Scorpio"){
    cout << "You seem to be giggly today. Who's making your heart flutter?" << endl;
  }
  else if (sign.getStarSign() == "Sagittarius") {
    cout << "You're pretty amused today especially by all of the drama that is occurring around you." << endl; 
  }
  else if (sign.getStarSign() == "Capricorn") {
    cout << "You feel hopeful about the future because something good just happened to you! Congrats ((:" << endl;
  }
  else if (sign.getStarSign() == "Aquarius") {
    cout << "You feel angered by the world for treating you unfairly, which is okay. You might want to vent to a close one to feel better." << endl;
  }
  else if (sign.getStarSign() == "Pisces") {
    cout << "You're feeling happy. YAYYY!! That is the ultimate goal, happiness. ((:" << endl;
  }
}

void Fortune::Luck() {
  if (luck < 77) {
    cout << "Unfortunately, the weather isn't looking very good for you. Your is " << luck << "% today. Hopefully tomorrow will be a better day and the sun shines brightly for you." << endl;
  }else {
    cout << "You are " << luck << "% luck today!! Today, everything will be in your favor as the weather is on your side today!" << endl;
  }
}