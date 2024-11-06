<html>
<head>
  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
    }
    body {
      /*font-family: Arial, sans-serif;*/
      font-family: 'Courier New', Courier, monospace;
      display: flex;
      flex-direction: column;
      align-items: center;
      padding: 1em;
      background-color: #f5f5f5;
    }
    header {
      width: 100%;
      max-width: 800px;
      background-color: #4CAF50;
      color: white;
      padding: 1em;
      text-align: center;
      margin-bottom: 1em;
      border-radius: 5px;
    }
    #search-bar {
      width: 100%;
      max-width: 800px;
      padding: 0.75em;
      margin-bottom: 1em;
      font-size: 1em;
      border: 1px solid #ccc;
      border-radius: 5px;
    }
    nav {
      display: flex;
      flex-direction: column;
      width: 100%;
      max-width: 800px;
    }
    nav a {
      display: block;
      margin: 0.5em 0;
      padding: 0.75em 1em;
      color: white;
      background-color: #333;
      text-decoration: none;
      text-align: center;
      border-radius: 5px;
      font-size: 1.1em;
    }
    nav a:hover {
      background-color: #555;
    }
    /* Responsive adjustments */
    @media (max-width: 600px) {
      nav a {
        font-size: 1em;
      }
    }
  </style>
</head>
<body>
  <header>
    <h1>Semester Resources</h1>
  </header>

  <!-- Search Bar -->
  <input type="text" id="search-bar" placeholder="Search" onkeyup="filterCourses()">

  <nav id="course-list">
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/DISCRETE%20MATHEMATICS">Discrete Mathematics</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/ENGLISH%20WRITING%20SKILLS%20%26%20COMMUNICATIONS">English Writing Skills & Communications</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/INTEGRAL%20CALCULUS%20%26%20ORD.%20DIFF%20EQUATION">Integral Calculus & Ordinary Differential Equations</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/OBJECT%20ORIENTED%20PROGRAMMING%201%20(JAVA)">Object Oriented Programming 1</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/PHYSICS%202%20LAB">Physics 2 Lab</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_2_Summer_2021-2022/PHYSICS%202">Physics 2</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/COMPLEX%20VARIABLE%2CLAPLACE%20%26%20Z-TRANSFORMATION">Complex Variable, Laplace & Z-transformation</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/COMPUTER%20AIDED%20DESIGN%20%26%20DRAFTING">Computer Aided Design & Drafting</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/DATA%20STRUCTURE%20LAB">Data Structure Lab</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/DATA%20STRUCTURE">Data Structure</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/INTRODUCTION%20TO%20DATABASE">Introduction to Databases</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/INTRODUCTION%20TO%20ELECTRICAL%20CIRCUITS%20LAB">Introduction To Electrical Circuits Lab</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_3_Fall_2022-2023/INTRODUCTION%20TO%20ELECTRICAL%20CIRCUITS%20%5BH%5D">Introduction To Electrical Circuits</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_4_Spring_2022-2023/CHEMISTRY">Chemistry</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_4_Spring_2022-2023/ELECTRONIC%20DEVICES%20LAB">Electronic Devices Lab</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_4_Spring_2022-2023/MATRICES%2C%20VECTORS%2C%20FOURIER%20ANALYSIS">Matrices, Vectors, Fourier Analysis</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_4_Spring_2022-2023/OBJECT%20ORIENTED%20ANALYSIS%20AND%20DESIGN">Object Oriented Analysis And Design</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_4_Spring_2022-2023/PRINCIPLES%20OF%20ACCOUNTING">Principles Of Accounting</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_5_Summer_2022-2023/ALGORITHMS">Algorithms</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_5_Summer_2022-2023/BANGLADESH%20STUDIES%20%5BFST%5D">Bangladesh Studies</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_5_Summer_2022-2023/COMPUTATIONAL%20STATISTICS%20AND%20PROBABILITY">Computational Statistics And Probability</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_5_Summer_2022-2023/ELECTRONIC%20DEVICES">Electronic Devices</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_6_Fall_2023-2024/DIGITAL%20LOGIC%20AND%20CIRCUITS%20LAB">Digital Logic And Circuits Lab</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_6_Fall_2023-2024/DIGITAL%20LOGIC%20AND%20CIRCUITS">Digital Logic And Circuits</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_6_Fall_2023-2024/NUMERICAL%20METHODS%20FOR%20SCIENCE%20AND%20ENGINEERING">Numerical Methods For Science And Engineering</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_6_Fall_2023-2024/PRINCIPLES%20OF%20ECONOMICS%20(FST)">Principles Of Economics</a>
    <a href="https://github.com/encodeshohan/Semester-Resources/tree/main/Semester_6_Fall_2023-2024/THEORY%20OF%20COMPUTATION">Theory Of Computation</a>
  </nav>

  <script>
    function filterCourses() {
      const query = document.getElementById('search-bar').value.toLowerCase();
      const courses = document.querySelectorAll('nav a');

      courses.forEach(course => {
        const courseText = course.textContent.toLowerCase();
        course.style.display = courseText.includes(query) ? 'block' : 'none';
      });
    }
  </script>
</body>
</html>
