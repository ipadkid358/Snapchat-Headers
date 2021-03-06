/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCFriendsFeedMultiRecipient : NSObject <NSCopying> {

	BOOL _containsGroup;
	NSArray* _displayNames;
	unsigned long long _numberOfSilhouettes;

}

@property (nonatomic,copy,readonly) NSArray * displayNames;                         //@synthesize displayNames=_displayNames - In the implementation block
@property (nonatomic,readonly) BOOL containsGroup;                                  //@synthesize containsGroup=_containsGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSilhouettes;              //@synthesize numberOfSilhouettes=_numberOfSilhouettes - In the implementation block
-(id)initWithDisplayNames:(id)arg1 containsGroup:(BOOL)arg2 numberOfSilhouettes:(unsigned long long)arg3 ;
-(NSArray *)displayNames;
-(BOOL)containsGroup;
-(unsigned long long)numberOfSilhouettes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

