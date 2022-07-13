[projectname]:  leetcode-leetcodeCompilation-cpp_java
[projectauthor]: jng4w
[linkedin]: xdtn7

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/jng4w">
    <img src="../../resources/jng4w.jpg" alt="Logo" >
  </a>

  <h3 align="center">Problem: Remove Element</h3>

  <p align="center">
    Solution for a problem in a Leetcode problem compilation.
    <br />
    <a href=""><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="">View Demo</a>
    ·
    <a href="">Report Bug</a>
    ·
    <a href="">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
<summary><b>Table of content</b></summary>
<ol>
    <li>
      <a href="#solution-description">Solution description</a>
    </li>
    <li>
      <a href="#problem">Problem</a>
    </li>
    <li>
      <a href="#contact">Contact</a>
    </li>
  </ol>
</details>

# Solution description

|  |  |
| :--- | :--- |
| **Level**| *Easy* |
| **Language** | *C++* |
| **Status** | *Accepted* |
| **Runtime** | *0 ms ~ 100.00%* |
| **Memory Usage**| *8.7 MB ~  72.62%* |


# Problem
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100

# Contact
*Duy Tinh Nguyen - [@xdtn7](https://www.linkedin.com/in/xdtn7/) - duytinhnguyenforwork@gmail.com*


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[projectname]:  leetcode-leetcodeCompilation-cpp_java
[contributors-shield]: https://img.shields.io/github/contributors/jng4w/leetcode-leetcodeCompilation-cpp_java.svg?style=for-the-badge
[contributors-url]: https://github.com/jng4w/leetcode-leetcodeCompilation-cpp_java/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/jng4w/leetcode-leetcodeCompilation-cpp_java.svg?style=for-the-badge
[forks-url]: https://github.com/jng4w/leetcode-leetcodeCompilation-cpp_java/network/members
[stars-shield]: https://img.shields.io/github/stars/jng4w/leetcode-leetcodeCompilation-cpp_java.svg?style=for-the-badge
[stars-url]: https://github.com/jng4w/leetcode-leetcodeCompilation-cpp_java/stargazers
[issues-shield]: https://img.shields.io/github/issues/jng4w/leetcode-leetcodeCompilation-cpp_java.svg?style=for-the-badge
[issues-url]: https://github.com/jng4w/leetcode-leetcodeCompilation-cpp_java/issues
[license-shield]: https://img.shields.io/github/license/jng4w/leetcode-leetcodeCompilation-cpp_java.svg?style=for-the-badge
[license-url]: https://github.com/jng4w/leetcode-leetcodeCompilation-cpp_java/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/xdtn7
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 