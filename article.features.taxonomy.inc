<?php
/**
 * @file
 * article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function article_taxonomy_default_vocabularies() {
  return array(
    'hhs_organization' => array(
      'name' => 'HHS Organization',
      'machine_name' => 'hhs_organization',
      'description' => 'Hierarchical list of HHS offices',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
