/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SCFuture;

@interface SCStickerSuperCategory : NSObject {

	NSArray* _stickerCategories;
	long long _type;
	SCFuture* _normalIconImage;
	SCFuture* _selectedIconImage;

}

@property (nonatomic,copy,readonly) NSArray * stickerCategories;              //@synthesize stickerCategories=_stickerCategories - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SCFuture * normalIconImage;                    //@synthesize normalIconImage=_normalIconImage - In the implementation block
@property (nonatomic,readonly) SCFuture * selectedIconImage;                  //@synthesize selectedIconImage=_selectedIconImage - In the implementation block
-(NSArray *)stickerCategories;
-(SCFuture *)normalIconImage;
-(SCFuture *)selectedIconImage;
-(id)initWithStickerCategories:(id)arg1 type:(long long)arg2 normalIconImage:(id)arg3 selectedIconImage:(id)arg4 ;
-(long long)type;
@end
