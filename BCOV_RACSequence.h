/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/BCOV_RACStream.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSEnumerator;

@interface BCOV_RACSequence : BCOV_RACStream <NSCoding, NSCopying, NSFastEnumeration>

@property (nonatomic,readonly) id head; 
@property (nonatomic,readonly) BCOV_RACSequence * tail; 
@property (nonatomic,copy,readonly) NSArray * array; 
@property (nonatomic,copy,readonly) NSEnumerator * objectEnumerator; 
@property (nonatomic,copy,readonly) BCOV_RACSequence * eagerSequence; 
@property (nonatomic,copy,readonly) BCOV_RACSequence * lazySequence; 
+(id)return:(id)arg1 ;
+(id)sequenceWithHeadBlock:(/*^block*/id)arg1 tailBlock:(/*^block*/id)arg2 ;
+(id)empty;
-(id)concat:(id)arg1 ;
-(id)signalWithScheduler:(id)arg1 ;
-(BCOV_RACSequence *)eagerSequence;
-(id)foldRightWithStart:(id)arg1 reduce:(/*^block*/id)arg2 ;
-(BCOV_RACSequence *)lazySequence;
-(id)bind:(/*^block*/id)arg1 passingThroughValuesFromSequence:(id)arg2 ;
-(id)foldLeftWithStart:(id)arg1 reduce:(/*^block*/id)arg2 ;
-(BOOL)all:(/*^block*/id)arg1 ;
-(id)foldLeftWithStart:(id)arg1 combine:(/*^block*/id)arg2 ;
-(id)foldRightWithStart:(id)arg1 combine:(/*^block*/id)arg2 ;
-(id)zipWith:(id)arg1 ;
-(id)bind:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BC198*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)array;
-(NSEnumerator *)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)signal;
-(BOOL)any:(/*^block*/id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)head;
-(BCOV_RACSequence *)tail;
@end

