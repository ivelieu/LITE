# LITE
Limited Information Tetration Encryption  
Made with Darcy (@Ivelieu) and Ben (@puzzleduck)

# Transmission process

Public key 1: 553 truncated from 65536
Let us call this public key g, for generator of the ciphertext. 
other names: public slice, public fraction?

Public key 2: "I want you to truncate your result to this.". eg. digit 50 to 60.
Let us call public key to tl and th: tl is the lower bound of truncation, th is the higher bound.
There is a minimum required truncation definition! The lower bound is defined by the length of the private key's tetration operation. ie. Since 2^^4 has less than 60 digits, our example in practice would require larger private keys. ie. I do not believe cyling the non-truncated private key would be satsifactory.

The upper bound is only defined by the geometry of the universe. So, one can utilise 100% of a channel to transmit a message of unknown length or values. This truly reveals no information about either the encrypted text or the private keys.

Private keys: 2 and 4
ie. 2 is the base and 4 is the primitive exponent 
(it gets more complex as the result is calculated. 2^^4 = 2^2^2^2 = 2 * 2 ...)
Let us call the private keys b and p.
The private key in total is the result b^^p. For this private calculated key (b^^p) to be secure by the metod of the LIP (Limited Information Problem), the number of digits of (b^^p) must be greater than the number of atoms in the observable universe. ie. 10^80.
I'm bob, I did that, I send 553 as public key to Alice
Alice exponents their message by 553.
The message is 42, obviously.
42 = (42^553) rooted to the exponent of (42^553)
= 4.53 * 10^897 --- almost a googleplex!
They send a subset to me, over an untrusted channel. I tell them which subset I want. 
(both public keys are sent simeltaneously)
They don't know the subset of public key 1.
I get the result. I perform (the message) rooted to the exponent of (2^^4 truncated to public key 2) inside my quantum computer.
ie. 

#### The quantum computer spits out 42. 


### A bit about truncation on both ends of a number:
until now, truncation has only needed to be in one direction. ie. "round to 2 decimal places" is truncating the lower bound. "up to 6 significant figures" is also the lower bound. Truncation to the upper bound has no universal mathmatical function. 
Let there be a function trunc_up that accepts one number for the value to be truncated, and another value for the upper truncation bound. The function trunc_up(x,n) returns the first n travelling along x from the reverse big endian path, ignoring zeroes on the end. 

Let there be a function trunc_both that accepts one number for the value to be truncated, another value for the lower truncation bound, and another value for the upper truncation bound. This function trunc_both(x,tl,th) will perform the following psuedocode:
x1 = trunc(x,tl);
x2 = trunc_up(x1, th);
return x2;

big endian is the standard of decimal notation.


### A bit on the Limited Information Problem (LIP)
Let us assume that there is a finite (or, if you would rather, "limited") amount of information in the observable universe.

Based on this, there must be a limit to the amount of computation that can be observed in the observable universe. This is because if I have a logic circuit LC with complexity greater than the number of atoms in the observable universe (AITOU), which is possible, the output would be larger than AITOU. ie. The output can never be observably recorded in our universe.

Using this principle, we can design simple, recursive operations that produce outputs that are greater than AITOU past a certain threshold. All equations beyond this threshold are impossible to reverse entirely, according to general relativity applying to the geometry of the universe. However, subsets of this output are observable.

If a subset of the output greater than AITOU is sufficiently complex to identify itself, but sufficiently small to "be observable inside" the AITOU, it is possible to verify the output subset as a true subset of the output without being able to "recreate" the output using the output subset. The Limited Information Problem is the principle of the latter: given only the sufficiently large subset of a computation greater than AITOU, the original computation cannot be determined.



### Potential issues  
targetted quantum entanglement and tunelling
Probably requires more energy than contained in the universe ...




### Seperate topic: DTube
Censorship is decided by the majority of users, not the majority of money
No ads, no power from user profiling