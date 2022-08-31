google.load('visualization', 'current', {'packages':['corechart', 'line', 'sankey']});
google.charts.setOnLoadCallback(drawChartLine);

function drawChartLine() {

  var dataLine = google.visualization.arrayToDataTable([
    ['Meses', 'Bom', 'Regular', 'Ruim'],
    [3, 32, 33, 30],
    [6, 33, 31, 33],
    [8, 29, 30, 38],
    [12, 30, 32, 36],
    [16, 33, 26, 38],
    [16.5, 33, 22, 43],
    [17, 32, 23, 44],
    [19, 37, 27, 34],
    [23, 37, 29, 32],
    [24, 31, 26, 40],
    [27, 30, 24, 44],
    [28, 24, 30, 45],
    [30, 24, 24, 51],
    [33, 22, 24, 53],
    [36, 22, 24, 53],
    [39, 25, 28, 46]
  ]);

  var optionLine = {
    pointSize: 200,  
    lineWidth: 10,
    hAxis: {title: 'Tempo em Meses', minValue: 3, maxValue: 39},
    vAxis: {title: 'Avaliação em %'},
    series: {
    0:{color: 'green', visibleInLegend: true, lineWidth: 3},
    1:{color: '#918f00', visibleInLegend: true},
    2:{color: 'red', visibleInLegend: true}
    }
  };

  var dataPizza = google.visualization.arrayToDataTable([
    ['Avaliação', '%'],
    ['Bom', 438],
    ['Regular', 433],
    ['Ruim', 660],
    ['NS-NR', 28]
  ]);
/*
    ['Bom', 29.625],
    ['Regular', 27.0625],
    ['Ruim', 41.25]
*/

  var optionPizza = {
    legend: 'none',
    pieSliceText: '%',
    pieStartAngle: 100,
  };

  var dataCombo = google.visualization.arrayToDataTable([
    ['Regiao', 'Bom', 'Regular', 'Ruim', 'NS/NR'],
    ['Norte', 35, 28, 37, 1],
    ['Nordeste', 20, 19, 58, 3],
    ['Centro-Oeste', 30, 23, 44, 4],
    ['Suldeste', 30, 15, 55, 1],
    ['Sul', 25, 26, 45, 4]
  ]);

  var optionCombo = {
    hAxis: {title: 'Regiões'},
    vAxis: {title: 'Avaliação em %'},
    seriesType: 'bars',
    series: {5: {type: 'line'}}
  };

  var dataSankey = new google.visualization.DataTable();
  dataSankey.addColumn('string', 'Bolsonaro');
  dataSankey.addColumn('string', 'Haddad');
  dataSankey.addColumn('number', 'Peso');
  dataSankey.addRows([
    [ 'Bolsonaro', 'BoIsonaro', 62 ],
    [ 'Bolsonaro', 'Lula', 12 ],
    [ 'Bolsonaro', 'Outros', 22 ],
    [ 'Bolsonaro', 'Branco/Nulo/Nao Votou', 3 ],                    
    [ 'Bolsonaro', 'NS/NR', 2 ],                    
    [ 'Haddad', 'Lula', 78 ],
    [ 'Haddad', 'BoIsonaro', 1 ],
    [ 'Haddad', 'Outros', 19 ],
    [ 'Haddad', 'Branco/Nulo/Nao Votou', 1 ],                    
    [ 'Haddad', 'NS/NR', 0 ],            
    [ 'Branco/Nulo/Não Votou', 'Lula', 47 ],
    [ 'Branco/Nulo/Não Votou', 'BoIsonaro', 11 ],
    [ 'Branco/Nulo/Não Votou', 'Branco/Nulo/Nao Votou', 11 ],          
    [ 'Branco/Nulo/Não Votou', 'Outros', 29 ],          
    [ 'Branco/Nulo/Não Votou', 'NS/NR', 2 ],
    [ 'NS-NR', 'Lula', 37 ],
    [ 'NS-NR', 'BoIsonaro', 30 ],
    [ 'NS-NR', 'Branco/Nulo/Nao Votou', 6 ],          
    [ 'NS-NR', 'Outros', 24 ],          
    [ 'NS-NR', 'NS/NR', 3 ]
  ]);

  var optionSankey = {
      sankey: {
        node: { 
          label: { 
            fontSize: 14,
            color: '#871b47',
          } 
        }
      }
  };


  var line = new google.charts.Line(document.getElementById('lineChart'));
  line.draw(dataLine, optionLine);

  var pizza = new google.visualization.PieChart(document.getElementById('pizzaChart'));
  pizza.draw(dataPizza, optionPizza);

  var combo = new google.visualization.ComboChart(document.getElementById('comboChart'));
  combo.draw(dataCombo, optionCombo);

  var sankey = new google.visualization.Sankey(document.getElementById('sankeyChart'));
  sankey.draw(dataSankey, optionSankey);
}
