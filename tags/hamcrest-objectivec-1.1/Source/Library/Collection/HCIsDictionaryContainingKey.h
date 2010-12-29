//
//  OCHamcrest - HCIsDictionaryContainingKey.h
//  Copyright 2010 www.hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrest/HCBaseMatcher.h>


/**
     Matches dictionaries containing a key satisfying a given matcher.
    @ingroup collection_matchers
 */
@interface HCIsDictionaryContainingKey : HCBaseMatcher
{
    id<HCMatcher> keyMatcher;
}

+ (id) isDictionaryContainingKey:(id<HCMatcher>)theKeyMatcher;
- (id) initWithKeyMatcher:(id<HCMatcher>)theKeyMatcher;

@end


/**
    Matches dictionaries containing a key satisfying a given matcher.
    @param matcherOrValue  A matcher, or a value for @ref equalTo matching.
    @see HCIsDictionaryContainingKey
    @ingroup collection_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_hasKey(id matcherOrValue);

/**
    Synonym for @ref HC_hasKey, available if @c HC_SHORTHAND is defined.
    @ingroup collection_matchers
 */
#ifdef HC_SHORTHAND
    #define hasKey HC_hasKey
#endif