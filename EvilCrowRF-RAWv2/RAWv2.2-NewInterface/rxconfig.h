const char RXConfig[] PROGMEM = R"=====(
<html>
<head>
    <title>RAW RX Config</title>
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css">
    <script src="lib.js"></script> 
</head>
<body>
<body>
<nav id='menu'>
  <input type='checkbox' id='responsive-menu' onclick='updatemenu()'><label></label>
  <ul>
    <li><a href='/'>Home</a></li>
    <li><a class='dropdown-arrow'>Config</a>
      <ul class='sub-menus'>
        <li><a href='/txconfig'>RAW TX Config</a></li>
        <li><a href='/txbinary'>Binary TX Config</a></li>
        <li><a href='/rxconfig'>RX Config</a></li>
        <li><a href='/btnconfig'>Button TX Config</a></li>
      </ul>
    </li>
    <li><a class='dropdown-arrow'>RX Log</a>
      <ul class='sub-menus'>
        <li><a href='/viewlog'>RX Logs</a></li>
        <li><a href='/delete'>Delete Logs</a></li>
        <li><a href='/downloadlog'>Download Logs</a></li>
        <li><a href='/cleanspiffs'>Clean SPIFFS</a></li>
      </ul>
    </li>
  </ul>
</nav>
<br>
<br>
<FORM action="/setrx" method="post" id="config" target="iframe">
    <p>Module: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="module" form="config" id="styledSelect1">
       <option value="1">Module 1</option> 
       <option value="2">Module 2</option> 
    </select>
    </label>
    <hr>
    <p>Modulation: </p>
    <label class="custom-select" for="styledSelect1">
    <select name="mod" form="config" id="styledSelect1">
       <option value="0">2-FSK</option> 
       <option value="1">GFSK</option>
       <option value="2">ASK/OOK</option>
       <option value="3">4-FSK</option> 
       <option value="4">MSK</option> 
    </select>
    </label>
    <hr>
    <p>Frequency: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="frequency"></textarea>
    <hr>
    <p>RxBW: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="setrxbw"></textarea>
    <hr>
    <p>Deviation: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="deviation"></textarea>
    <hr>
    <p>Data Rate: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="datarate"></textarea>
    <hr>
    <INPUT type="radio" name="configmodule" value="4" hidden="1" checked="checked">
    <INPUT class="button-submit" type="submit" value="Apply">
</form>
<br>
<hr>
<br>
<iframe style="visibility: hidden;" src="http://" )+local_IPstr+"/setrx" name="iframe"></iframe>
</body>
</html>
)=====";
