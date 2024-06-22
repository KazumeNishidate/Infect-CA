
This code simulates the Infectious disease Cellular Automata based on
the RWCA model [1,2,3].

- Each walker randomly walks around the 2D lattice following the RWCA
  rule.

- When a walker comes into contact with an infected walker, it then
  gets infected and stays at the place. The health point of the walker
  becomes -n, say -10.

- The health point of the infected walker was added by one at each CA
  time step.  When the health point becomes -1, it becomes a healthy
  walker and start to walk around the system.


[1] K. Nishidate, M. Baba, and R.J. Gaylord. Cellular automaton model
  for random walkers. Phys. Rev. Lett., 77:1675–1678,
  1996. https://journals. aps.org/prl/abstract/10.1103/PhysRevLett.77.1675.

[2]  K. Nishidate, M. Baba, and R.J. Gaylord. Cellular automaton model
  for biased diffusive traffic flow. J. Phys. Soc. Jpn., 65:3415–3418,
  1996. https: //journals.jps.jp/doi/abs/10.1143/JPSJ.65.3415.

[3] K. Nishidate, M. Baba, H. Chiba, T. Ito, K. Kodama, and
  K. Nishikawa. Cellular automaton model for biased diffusive traffic
  flow. J. Phys. Soc. Jpn., 69:1352–1355,
  2000. https://journals.jps.jp/doi/abs/10.1143/ JPSJ.69.1352.


kazume.nishidate@gmail.com
