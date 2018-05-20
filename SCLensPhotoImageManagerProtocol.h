/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLensPhotoImageManagerProtocol <NSObject>
@required
-(id)imageIdentifiers;
-(void)reloadAssetsIndexWithCompletion:(/*^block*/id)arg1;
-(id)imageIdentifierForItemAtIndex:(unsigned long long)arg1;
-(id)getThumbnailImageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3;
-(id)getOriginalImageAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)cancelImageLoadingWithId:(id)arg1;
-(long long)status;
-(unsigned long long)imageCount;

@end
