/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchNetworkImage, SCSendToScrollLabelModel, SCSearchActionModel;

@interface SCCheetahSendToStoryViewModel : NSObject <NSCopying> {

	BOOL _isActive;
	BOOL _isSelected;
	long long _rowIndex;
	NSString* _storyId;
	NSString* _mischiefId;
	NSString* _labelText;
	NSString* _officialFriendmoji;
	long long _itemType;
	SCSearchNetworkImage* _previewImage;
	long long _contentMode;
	SCSendToScrollLabelModel* _scrollLabelModel;
	SCSearchActionModel* _singleTapAction;
	SCSearchActionModel* _longPressAction;

}

@property (nonatomic,readonly) long long rowIndex;                                            //@synthesize rowIndex=_rowIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyId;                                       //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mischiefId;                                    //@synthesize mischiefId=_mischiefId - In the implementation block
@property (nonatomic,copy,readonly) NSString * labelText;                                     //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * officialFriendmoji;                            //@synthesize officialFriendmoji=_officialFriendmoji - In the implementation block
@property (nonatomic,readonly) long long itemType;                                            //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                                 //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,copy,readonly) SCSearchNetworkImage * previewImage;                      //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) long long contentMode;                                         //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,copy,readonly) SCSendToScrollLabelModel * scrollLabelModel;              //@synthesize scrollLabelModel=_scrollLabelModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * singleTapAction;                    //@synthesize singleTapAction=_singleTapAction - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * longPressAction;                    //@synthesize longPressAction=_longPressAction - In the implementation block
-(NSString *)mischiefId;
-(NSString *)storyId;
-(NSString *)officialFriendmoji;
-(id)initWithRowIndex:(long long)arg1 storyId:(id)arg2 mischiefId:(id)arg3 labelText:(id)arg4 officialFriendmoji:(id)arg5 itemType:(long long)arg6 isActive:(BOOL)arg7 isSelected:(BOOL)arg8 previewImage:(id)arg9 contentMode:(long long)arg10 scrollLabelModel:(id)arg11 singleTapAction:(id)arg12 longPressAction:(id)arg13 ;
-(SCSendToScrollLabelModel *)scrollLabelModel;
-(SCSearchActionModel *)singleTapAction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)contentMode;
-(BOOL)isSelected;
-(long long)rowIndex;
-(SCSearchActionModel *)longPressAction;
-(long long)itemType;
-(NSString *)labelText;
-(SCSearchNetworkImage *)previewImage;
@end

