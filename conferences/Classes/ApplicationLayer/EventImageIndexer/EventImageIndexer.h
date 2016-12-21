//
//  EventImageIndexer.h
//  Conferences
//
//  Created by Konstantin Zinovyev on 12.12.16.
//  Copyright © 2016 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SpotlightEntityImageIndexer.h"

@class CSSearchableIndex;
@class EventObjectIndexer;

/**
 @author Konstantin Zinovyev
 
 ImageIndexer for Event model object
 */
@interface EventImageIndexer : NSObject <SpotlightEntityImageIndexer>

@property (nonatomic, strong) CSSearchableIndex *searchableIndex;
@property (nonatomic, strong) EventObjectIndexer *indexer;

@end