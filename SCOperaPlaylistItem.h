/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCOperaPlaylistItemGroup;

@interface SCOperaPlaylistItem : NSObject {

	NSString* _type;
	NSString* __id;
	SCOperaPlaylistItemGroup* _group;

}

@property (nonatomic,copy,readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * _id;                                //@synthesize _id=__id - In the implementation block
@property (assign,nonatomic,__weak) SCOperaPlaylistItemGroup * group;              //@synthesize group=_group - In the implementation block
-(NSString *)_id;
-(id)initWithType:(id)arg1 ID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(void)setGroup:(SCOperaPlaylistItemGroup *)arg1 ;
-(SCOperaPlaylistItemGroup *)group;
@end

