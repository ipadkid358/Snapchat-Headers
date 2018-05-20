/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryLoggerSessionCounter.h>

@interface SCSnapcodeManagerSessionCounter : SCGalleryLoggerSessionCounter {

	long long _createCount;
	long long _editCount;
	long long _deleteCount;
	long long _imageEditOpenCount;
	long long _webImageUsedCount;
	long long _previewScanCount;
	long long _refreshCount;

}

@property (assign,nonatomic) long long createCount;                     //@synthesize createCount=_createCount - In the implementation block
@property (assign,nonatomic) long long editCount;                       //@synthesize editCount=_editCount - In the implementation block
@property (assign,nonatomic) long long deleteCount;                     //@synthesize deleteCount=_deleteCount - In the implementation block
@property (assign,nonatomic) long long imageEditOpenCount;              //@synthesize imageEditOpenCount=_imageEditOpenCount - In the implementation block
@property (assign,nonatomic) long long webImageUsedCount;               //@synthesize webImageUsedCount=_webImageUsedCount - In the implementation block
@property (assign,nonatomic) long long previewScanCount;                //@synthesize previewScanCount=_previewScanCount - In the implementation block
@property (assign,nonatomic) long long refreshCount;                    //@synthesize refreshCount=_refreshCount - In the implementation block
-(long long)imageEditOpenCount;
-(void)setImageEditOpenCount:(long long)arg1 ;
-(long long)webImageUsedCount;
-(void)setWebImageUsedCount:(long long)arg1 ;
-(long long)previewScanCount;
-(void)setPreviewScanCount:(long long)arg1 ;
-(long long)deleteCount;
-(long long)createCount;
-(void)setCreateCount:(long long)arg1 ;
-(void)setDeleteCount:(long long)arg1 ;
-(long long)editCount;
-(void)setEditCount:(long long)arg1 ;
-(long long)refreshCount;
-(void)setRefreshCount:(long long)arg1 ;
@end

