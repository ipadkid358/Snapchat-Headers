/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface SCGalleryLagunaStorySnapCellModel : NSObject {

	NSString* _contentId;
	unsigned long long _state;
	UIImage* _image;
	double _progress;
	unsigned long long _changes;

}

@property (assign,nonatomic) unsigned long long changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) NSString * contentId;                  //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double progress;                       //@synthesize progress=_progress - In the implementation block
+(id)viewModelWithSnap:(id)arg1 isPendingTransfer:(BOOL)arg2 ;
+(id)viewModelWithOldViewModel:(id)arg1 state:(unsigned long long)arg2 image:(id)arg3 progress:(double)arg4 ;
-(id)initWithContentId:(id)arg1 state:(unsigned long long)arg2 image:(id)arg3 progress:(double)arg4 ;
-(unsigned long long)state;
-(UIImage *)image;
-(double)progress;
-(NSString *)contentId;
-(unsigned long long)changes;
-(void)clearChanges;
-(void)setChanges:(unsigned long long)arg1 ;
@end
