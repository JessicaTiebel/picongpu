.. _usage-workflows-addLaser:

Adding Laser
------------

.. sectionauthor:: Sergei Bastrakov

There are several alternative ways of adding an incoming laser (or any source of electromagnetic field) to a PIConGPU simulation:

#. selecting a laser profile in :ref:`laser.param <usage-params-core>`
#. enabling an incident field source in :ref:`incidentField.param <usage-params-core>`
#. using field or current background in :ref:`fieldBackground.param <usage-params-core>`

These ways operate independently of one another, each has its features and limitations.
All but the current background one are fully accurate only for the standard Yee field solver.
For other field solver types, a user should evaluate the inaccuracies introduced.

The functioning of the laser (the first way) is covered in more detail in the following class:

.. doxygenclass:: picongpu::fields::laserProfiles::acc::BaseFunctor
   :project: PIConGPU
