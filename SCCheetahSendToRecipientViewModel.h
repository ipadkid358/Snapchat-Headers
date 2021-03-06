/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCCornerRadii, SCSearchActionModel, SCSendToScrollLabelModel, UIImage;

@interface SCCheetahSendToRecipientViewModel : NSObject <NSCopying> {

	BOOL _shouldShowSeparatorLine;
	BOOL _isSelected;
	BOOL _justToggled;
	BOOL _isActive;
	long long _rowIndex;
	long long _recipientType;
	NSString* _recipientId;
	NSString* _title;
	NSString* _subtitle;
	NSString* _emoji;
	long long _streakCount;
	unsigned long long _numberOfCellInOneRow;
	SCCornerRadii* _cornerRadii;
	SCSearchActionModel* _tapActionModel;
	SCSearchActionModel* _longPressActionModel;
	NSString* _recipientUsername;
	SCSendToScrollLabelModel* _scrollLabelModel;
	NSString* _mischiefId;
	long long _itemType;
	UIImage* _previewImage;

}

@property (nonatomic,readonly) long long rowIndex;                                            //@synthesize rowIndex=_rowIndex - In the implementation block
@property (nonatomic,readonly) long long recipientType;                                       //@synthesize recipientType=_recipientType - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientId;                                   //@synthesize recipientId=_recipientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                                         //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,readonly) long long streakCount;                                         //@synthesize streakCount=_streakCount - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeparatorLine;                                  //@synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) BOOL justToggled;                                              //@synthesize justToggled=_justToggled - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCellInOneRow;                       //@synthesize numberOfCellInOneRow=_numberOfCellInOneRow - In the implementation block
@property (nonatomic,copy,readonly) SCCornerRadii * cornerRadii;                              //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapActionModel;                     //@synthesize tapActionModel=_tapActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * longPressActionModel;               //@synthesize longPressActionModel=_longPressActionModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientUsername;                             //@synthesize recipientUsername=_recipientUsername - In the implementation block
@property (nonatomic,copy,readonly) SCSendToScrollLabelModel * scrollLabelModel;              //@synthesize scrollLabelModel=_scrollLabelModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * mischiefId;                                    //@synthesize mischiefId=_mischiefId - In the implementation block
@property (nonatomic,readonly) long long itemType;                                            //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                                 //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy,readonly) UIImage * previewImage;                                   //@synthesize previewImage=_previewImage - In the implementation block
-(NSString *)mischiefId;
-(NSString *)recipientId;
-(NSString *)recipientUsername;
-(long long)streakCount;
-(SCSearchActionModel *)longPressActionModel;
-(SCSearchActionModel *)tapActionModel;
-(BOOL)shouldShowSeparatorLine;
-(id)initWithRowIndex:(long long)arg1 recipientType:(long long)arg2 recipientId:(id)arg3 title:(id)arg4 subtitle:(id)arg5 emoji:(id)arg6 streakCount:(long long)arg7 shouldShowSeparatorLine:(BOOL)arg8 isSelected:(BOOL)arg9 justToggled:(BOOL)arg10 numberOfCellInOneRow:(unsigned long long)arg11 cornerRadii:(id)arg12 tapActionModel:(id)arg13 longPressActionModel:(id)arg14 recipientUsername:(id)arg15 scrollLabelModel:(id)arg16 mischiefId:(id)arg17 itemType:(long long)arg18 isActive:(BOOL)arg19 previewImage:(id)arg20 ;
-(BOOL)justToggled;
-(unsigned long long)numberOfCellInOneRow;
-(SCSendToScrollLabelModel *)scrollLabelModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(NSString *)emoji;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelected;
-(long long)rowIndex;
-(NSString *)subtitle;
-(long long)itemType;
-(SCCornerRadii *)cornerRadii;
-(UIImage *)previewImage;
-(long long)recipientType;
@end

