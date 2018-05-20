/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMediaDrawerItem.h>
#import <Snapchat/SCChatMediaContentProvider.h>

@class PHAsset, NSMutableArray, NSString, NSDate;

@interface SCChatMediaDrawerBaseMedia : NSObject <SCMediaDrawerItem, SCChatMediaContentProvider> {

	PHAsset* _phAsset;
	NSMutableArray* _phImageRequestIds;
	NSString* _chatKey;
	NSString* _chatIV;
	double _aspectRatio;
	NSDate* _creationDate;
	NSString* _uuid;
	long long _mediaType;
	unsigned long long _sourceDrawerPosition;
	CGSize _originalSize;
	CGSize _croppedSize;
	CGSize _displaySize;
	CGSize _smallThumbnailSizeInSendBar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) PHAsset * phAsset;                             //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) CGSize originalSize;                                //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize croppedSize;                                 //@synthesize croppedSize=_croppedSize - In the implementation block
@property (assign,nonatomic) CGSize displaySize;                                   //@synthesize displaySize=_displaySize - In the implementation block
@property (assign,nonatomic) CGSize smallThumbnailSizeInSendBar;                   //@synthesize smallThumbnailSizeInSendBar=_smallThumbnailSizeInSendBar - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long mediaType;                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceDrawerPosition;              //@synthesize sourceDrawerPosition=_sourceDrawerPosition - In the implementation block
-(BOOL)isZipped;
-(id)venueId;
-(id)snapAttachmentUrl;
-(void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToBeUploaded;
-(void)uploadWithCompletion:(/*^block*/id)arg1 ;
-(long long)mediaContentType;
-(id)chatMediaID;
-(id)chatKey;
-(id)chatIV;
-(unsigned long long)sourceDrawerPosition;
-(void)setSourceDrawerPosition:(unsigned long long)arg1 ;
-(void)_cropImageIfNecessary;
-(void)fetchImageWithSize:(CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(BOOL)arg3 userSession:(id)arg4 completion:(/*^block*/id)arg5 ;
-(CGSize)smallThumbnailSizeInSendBar;
-(CGSize)maxSizeOnScreen;
-(void)fetchOriginalImageWithUserSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePropertiesWithURLAsset:(id)arg1 ;
-(void)fetchThumbnailImageWithCompletion:(BOOL)arg1 userSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchSmallThumbnailImageInSenderBarWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalImageWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelThumbnailFetchRequest;
-(void)prepareUploadDataForMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareUploadDataForMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSmallThumbnailSizeInSendBar:(CGSize)arg1 ;
-(id)init;
-(double)duration;
-(double)width;
-(double)height;
-(NSString *)uuid;
-(long long)itemType;
-(BOOL)isInfiniteDuration;
-(CGSize)croppedSize;
-(id)mediaIdentifier;
-(long long)mediaType;
-(NSDate *)creationDate;
-(double)aspectRatio;
-(void)setMediaType:(long long)arg1 ;
-(id)itemId;
-(CGSize)originalSize;
-(id)initWithPHAsset:(id)arg1 ;
-(PHAsset *)phAsset;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
@end

