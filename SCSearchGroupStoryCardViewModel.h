/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchActionModel;

@interface SCSearchGroupStoryCardViewModel : NSObject <NSCopying> {

	NSString* _username;
	NSString* _publicationId;
	NSString* _storyName;
	NSString* _storyTypeName;
	NSString* _storyTypeIconName;
	SCSearchActionModel* _longPressActionModel;

}

@property (nonatomic,copy,readonly) NSString * username;                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicationId;                                //@synthesize publicationId=_publicationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyName;                                    //@synthesize storyName=_storyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyTypeName;                                //@synthesize storyTypeName=_storyTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyTypeIconName;                            //@synthesize storyTypeIconName=_storyTypeIconName - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * longPressActionModel;              //@synthesize longPressActionModel=_longPressActionModel - In the implementation block
-(NSString *)publicationId;
-(SCSearchActionModel *)longPressActionModel;
-(id)initWithUsername:(id)arg1 publicationId:(id)arg2 storyName:(id)arg3 storyTypeName:(id)arg4 storyTypeIconName:(id)arg5 longPressActionModel:(id)arg6 ;
-(NSString *)storyName;
-(NSString *)storyTypeName;
-(NSString *)storyTypeIconName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
@end

