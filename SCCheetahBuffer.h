/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableSet;

@interface SCCheetahBuffer : NSObject <NSCoding> {

	unsigned long long _modelVersion;
	NSMutableArray* _buffer;
	unsigned long long _firstIndex;
	unsigned long long _numberOfItems;
	NSMutableSet* _objectsInBuffer;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(unsigned long long)_indexForItem:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(id)initWithSize:(unsigned long long)arg1 ;
@end

