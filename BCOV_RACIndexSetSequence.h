/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/BCOV_RACSequence.h>

@class NSData;

@interface BCOV_RACIndexSetSequence : BCOV_RACSequence {

	NSData* _data;
	const unsigned long long* _indexes;
	unsigned long long _count;

}

@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) const unsigned long long* indexes;              //@synthesize indexes=_indexes - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                       //@synthesize count=_count - In the implementation block
+(id)sequenceWithIndexSetSequence:(id)arg1 offset:(unsigned long long)arg2 ;
+(id)sequenceWithIndexSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BC198*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)description;
-(NSData *)data;
-(const unsigned long long*)indexes;
-(id)head;
-(id)tail;
@end

