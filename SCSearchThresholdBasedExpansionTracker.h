/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCSearchThresholdBasedExpansionTracker : NSObject <NSCopying> {

	unsigned long long _minimumThreshold;
	unsigned long long _maximumThreshold;
	unsigned long long _incrementThreshold;
	BOOL _hasMoreElements;
	unsigned long long _numberOfExpansions;
	unsigned long long _numberOfAllElements;
	unsigned long long _numberOfExpandedElements;

}

@property (assign,nonatomic) unsigned long long numberOfExpansions;                    //@synthesize numberOfExpansions=_numberOfExpansions - In the implementation block
@property (assign,nonatomic) BOOL hasMoreElements;                                     //@synthesize hasMoreElements=_hasMoreElements - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAllElements;                   //@synthesize numberOfAllElements=_numberOfAllElements - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfExpandedElements;              //@synthesize numberOfExpandedElements=_numberOfExpandedElements - In the implementation block
-(id)initWithMinimumThreshold:(unsigned long long)arg1 maximumThreshold:(unsigned long long)arg2 incrementThreshold:(unsigned long long)arg3 ;
-(void)_updateStatusWithNumberOfElements;
-(BOOL)hasMoreElements;
-(unsigned long long)_numberOfExpandedElementsWithNumberOfAllElements:(unsigned long long)arg1 numberOfExpansions:(unsigned long long)arg2 ;
-(unsigned long long)numberOfExpandedElementsWithNumberOfAllElements:(unsigned long long)arg1 numberOfExpansions:(unsigned long long)arg2 ;
-(void)setNumberOfAllElements:(unsigned long long)arg1 shouldResetExpansion:(BOOL)arg2 ;
-(void)setNumberOfExpansions:(unsigned long long)arg1 ;
-(unsigned long long)numberOfExpansionsWithOneMoreExpansion:(BOOL)arg1 ;
-(unsigned long long)numberOfExpandedElementsWithNumberOfExpansions:(unsigned long long)arg1 ;
-(unsigned long long)numberOfExpansions;
-(void)setHasMoreElements:(BOOL)arg1 ;
-(unsigned long long)numberOfAllElements;
-(void)setNumberOfAllElements:(unsigned long long)arg1 ;
-(unsigned long long)numberOfExpandedElements;
-(void)setNumberOfExpandedElements:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

